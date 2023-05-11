from werkzeug.security import generate_password_hash, check_password_hash
from flask import Flask, render_template, request, redirect, url_for, session
from flask_sqlalchemy import SQLAlchemy

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///database.db'
app.secret_key = 'mysecretkey'
db = SQLAlchemy(app)


class User(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(80), unique=True, nullable=False)
    password = db.Column(db.String(80), nullable=False)


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
        user = User.query.filter_by(username=username).first()
        if user:
            error = 'Username already exists. Please choose a different username.'
            return render_template('register.html', error=error)
        hashed_password = generate_password_hash(
            password, method='scrypt')
        new_user = User(username=username, password=hashed_password)
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


if __name__ == '__main__':
    db.create_all()
    app.run(debug=True)
