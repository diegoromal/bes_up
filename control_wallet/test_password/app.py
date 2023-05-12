from werkzeug.security import generate_password_hash, check_password_hash
from flask import Flask, render_template, request, redirect, url_for, session, flash
from flask_sqlalchemy import SQLAlchemy
from flask_bcrypt import Bcrypt
from datetime import datetime
from flask_mail import Mail, Message


app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///database.db'
app.secret_key = 'mysecretkey'
db = SQLAlchemy(app)
bcrypt = Bcrypt(app)


app.config['MAIL_SERVER'] = 'smtp.emailemnuvem.com.br'
app.config['MAIL_PORT'] = 465
app.config['MAIL_USE_TLS'] = False
app.config['MAIL_USE_SSL'] = True
app.config['MAIL_USERNAME'] = 'diego@qosit.com.br'
app.config['MAIL_PASSWORD'] = ''
app.config['MAIL_DEFAULT_SENDER'] = 'diego@qosit.com.br'

mail = Mail(app)


class User(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(80), unique=True, nullable=False)
    password = db.Column(db.String(80), nullable=False)
    email = db.Column(db.String(120), nullable=False)


class PasswordResetRequest(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    email = db.Column(db.String(120), nullable=False)
    token = db.Column(db.String(120), nullable=False)
    created_at = db.Column(db.DateTime, nullable=False,
                           default=datetime.utcnow)


@app.cli.command()
def createdb():
    """Creates database"""
    c = db.create_all()
    print('Database created')


@app.route('/')
def index():
    return render_template('index.html')


@app.route('/login/', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        user = User.query.filter_by(username=username).first()
        if user and check_password_hash(user.password, password):
            session['logged_in'] = True
            session['username'] = username
            return redirect(url_for('dashboard'))
        else:
            error = 'Invalid username or password. Please try again.'
            return render_template('login.html', error=error)
    else:
        return render_template('login.html')


@app.route('/dashboard/')
def dashboard():
    if session.get('logged_in'):
        return render_template('dashboard.html', username=session['username'])
    else:
        return redirect(url_for('login'))


@app.route('/logout/')
def logout():
    session.pop('logged_in', None)
    session.pop('username', None)
    return redirect(url_for('index'))


@app.route('/register/', methods=['GET', 'POST'])
def register():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        email = request.form['email']
        user = User.query.filter_by(username=username).first()
        if user:
            error = 'Username already exists. Please choose a different username.'
            return render_template('register.html', error=error)
        hashed_password = generate_password_hash(
            password, method='scrypt')
        new_user = User(username=username,
                        password=hashed_password, email=email)
        db.session.add(new_user)
        db.session.commit()
        session['logged_in'] = True
        session['username'] = username
        return redirect(url_for('dashboard'))
    else:
        return render_template('register.html')


@app.route('/change-password/', methods=['GET', 'POST'])
def change_password():
    if not session.get('logged_in'):
        return redirect(url_for('login'))
    error = None
    if request.method == 'POST':
        old_password = request.form['old_password']
        new_password = request.form['new_password']
        confirm_password = request.form['confirm_password']
        user = User.query.filter_by(username=session.get('username')).first()
        if not check_password_hash(user.password, old_password):
            error = 'Old password is incorrect. Please try again.'
        elif not new_password == confirm_password:
            error = 'New password and confirm password do not match. Please try again.'
        else:
            hashed_password = generate_password_hash(
                new_password, method='scrypt')
            user.password = hashed_password
            db.session.commit()
            return redirect(url_for('dashboard'))
    return render_template('change_password.html', error=error)


# funções para o reset de senha
def generate_reset_token():
    return bcrypt.generate_password_hash(str(datetime.utcnow())).decode('utf-8')


def is_valid_reset_token(token):
    reset_request = PasswordResetRequest.query.filter_by(token=token).first()
    if reset_request and not reset_request.expired():
        return True
    return False


def expire_reset_token(token):
    reset_request = PasswordResetRequest.query.filter_by(token=token).first()
    reset_request.expired = True
    db.session.commit()


def send_password_reset_email(user, reset_url):
    msg = Message('Redefinição de senha', recipients=[user.email])
    msg.body = f'Olá {user.username}, clique no link abaixo para redefinir sua senha:\n{reset_url}'
    mail.send(msg)


def send_password_reset(user):
    token = generate_reset_token()
    reset_request = PasswordResetRequest(
        email=user.email, token=token, created_at=datetime.utcnow())
    db.session.add(reset_request)
    db.session.commit()
    reset_url = url_for('reset_password', token=token, _external=True)
    send_password_reset_email(user, reset_url)


@app.route('/forgot_password', methods=['GET', 'POST'])
def forgot_password():
    if request.method == 'POST':
        email = request.form['email']
        user = User.query.filter_by(email=email).first()
        if user:
            send_password_reset(user)
            flash(
                'E-mail enviado com sucesso. Verifique sua caixa de entrada.', 'success')
            return redirect(url_for('login'))
        else:
            flash('E-mail inválido.', 'error')
    return render_template('forgot_password.html')


@app.route('/reset_password/<token>', methods=['GET', 'POST'])
def reset_password(token):
    if not is_valid_reset_token(token):
        flash('Token inválido ou expirado.')
        return redirect(url_for('forgot_password'))

    reset_request = PasswordResetRequest.query.filter_by(token=token).first()
    user = User.query.filter_by(email=reset_request.email).first()

    if request.method == 'POST':
        password = request.form['password']
        confirm_password = request.form['confirm_password']
        if not password == confirm_password:
            flash('As senhas não conferem.')
        else:
            user.password = bcrypt.generate_password_hash(
                password).decode('utf-8')
            db.session.delete(reset_request)
            db.session.commit()
            flash('Senha alterada com sucesso. Faça login com a nova senha.')
            return redirect(url_for('login'))

    return render_template('reset_password.html')


if __name__ == '__main__':
    db.create_all()
    app.run(debug=True)
