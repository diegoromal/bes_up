from flask import abort, render_template, request, url_for, redirect, session
from werkzeug.security import generate_password_hash, check_password_hash

from app.extensions.database import db
from app.models.usuarios import Users


def init_app(app):
    @app.route('/')
    def index():
        return render_template('index.html')

    @app.route('/dashboard/')
    def dashboard():
        if session.get('logged_in'):
            return render_template('dashboard.html', username=session['username'])
        else:
            return redirect(url_for('login'))

    @app.route('/login/', methods=['GET', 'POST'])
    def login():
        if request.method == 'POST':
            username = request.form['username']
            password = request.form['password']
            user = Users.query.filter_by(username=username).first()
            if user and check_password_hash(user.password, password):
                session['logged_in'] = True
                session['username'] = username
                return redirect(url_for('dashboard'))
            else:
                error = 'Nome de usuário ou senha inválidos. Por favor, tente novamente.'
                return render_template('login.html', error=error)
        else:
            return render_template('login.html')

    @app.route('/logout/')
    def logout():
        session.pop('logged_in', None)
        session.pop('username', None)
        return redirect(url_for('index'))

    @app.route('/register/', methods=['GET', 'POST'])
    def register():
        if request.method == 'POST':
            full_name = request.form['full_name']
            username = request.form['username']
            password = request.form['password']
            email = request.form['email']
            user = Users.query.filter_by(username=username).first()
            if user:
                error = 'O nome de usuário já existe. Por favor, escolha um nome de usuário diferente.'
                return render_template('register.html', error=error)
            hashed_password = generate_password_hash(password, method='scrypt')
            new_user = Users(full_name=full_name,
                             username=username,
                             password=hashed_password,
                             email=email)
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
            user = Users.query.filter_by(
                username=session.get('username')).first()
            if not check_password_hash(user.password, old_password):
                error = 'A senha antiga está incorreta. Por favor, tente novamente.'
            elif not new_password == confirm_password:
                error = 'As senhas não correspondem. Por favor, tente novamente.'
            else:
                hashed_password = generate_password_hash(
                    new_password, method='scrypt')
                user.password = hashed_password
                db.session.commit()
                password_changed = 'Sua senha foi alterada. Utilize a nova senha para efetuar login.'
                return render_template('dashboard.html', password_changed=password_changed)
        return render_template('change_password.html', error=error)
