from flask import abort, render_template, request, url_for, redirect, session
from werkzeug.security import generate_password_hash, check_password_hash
from datetime import datetime
from flask_mail import Message

from app.extensions.database import db
from app.extensions.mail import mail
from app.extensions.bcrypt import bcrypt
from app.models.users import Users
from app.models.clientes_fornecedores import ClientesFornecedores
from app.models.password_reset_request import PasswordResetRequest
from app.models.pagamentos_recebimentos import Pagamentos, Recebimentos


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
            department = request.form['department']
            permissions = request.form['permissions']
            user = Users.query.filter_by(username=username).first()
            if user:
                error = 'O nome de usuário já existe. Por favor, escolha um nome de usuário diferente.'
                return render_template('register.html', error=error)
            hashed_password = generate_password_hash(password, method='scrypt')
            new_user = Users(full_name=full_name,
                             username=username,
                             password=hashed_password,
                             email=email,
                             department=department,
                             permissions=permissions)
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
                success = 'Sua senha foi alterada. Utilize a nova senha para efetuar login.'
                return render_template('dashboard.html', success=success)
        return render_template('change_password.html', error=error)


# funções para o reset de senha

    def generate_reset_token():
        hashed_password = bcrypt.generate_password_hash(
            str(datetime.utcnow())).decode('utf-8')
        hashed_password = hashed_password.replace('/', '')
        return hashed_password

    def is_valid_reset_token(token):
        reset_request = PasswordResetRequest.query.filter_by(
            token=token).first()
        if reset_request and not reset_request.is_expired():
            return True
        return False

    def expire_reset_token(token):
        reset_request = PasswordResetRequest.query.filter_by(
            token=token).first()
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

    @app.route('/forgot_password/', methods=['GET', 'POST'])
    def forgot_password():
        if request.method == 'POST':
            email = request.form['email']
            user = Users.query.filter_by(email=email).first()
            if user:
                send_password_reset(user)
                success = 'E-mail enviado com sucesso. Verifique sua caixa de entrada.'
                return render_template('index.html', success=success)
            else:
                error = 'E-mail não cadastrado.'
                return render_template('forgot_password.html', error=error)
        return render_template('forgot_password.html')

    @app.route('/reset_password/<token>', methods=['GET', 'POST'])
    def reset_password(token):
        if not is_valid_reset_token(token):
            error = 'Token inválido ou expirado. Tente novamente.'
            return render_template('forgot_password.html', error=error)

        reset_request = PasswordResetRequest.query.filter_by(
            token=token).first()
        user = Users.query.filter_by(email=reset_request.email).first()

        if request.method == 'POST':
            password = request.form['password']
            confirm_password = request.form['confirm_password']
            if not password == confirm_password:
                error = 'As senhas não conferem. Tente novamente.'
                return render_template('reset_password.html', token=token, error=error)
            else:
                user.password = generate_password_hash(
                    password, method='scrypt')
                db.session.delete(reset_request)
                db.session.commit()
                success = 'Senha alterada com sucesso. Faça login com a nova senha.'
                return render_template('index.html', success=success)

        return render_template('reset_password.html', token=token)

    @app.route('/pagamentos/', methods=['GET', 'POST'])
    def pagamentos():
        clientes = ClientesFornecedores.query.all()
        error = "Não há clientes ou fornecedores cadastrados"
        if clientes:
            return render_template("pagamentos.html", pagamentos=pagamentos)
        return render_template("pagamentos.html", error=error)

        # if request.method == 'POST':
        #     password = request.form['password']
        #     confirm_password = request.form['confirm_password']
        #     if not password == confirm_password:
        #         error = 'As senhas não conferem. Tente novamente.'
        #         return render_template('reset_password.html', token=token, error=error)
        #     else:
        #         user.password = generate_password_hash(
        #             password, method='scrypt')
        #         db.session.delete(reset_request)
        #         db.session.commit()
        #         success = 'Senha alterada com sucesso. Faça login com a nova senha.'
        #         return render_template('index.html', success=success)

        # return render_template('reset_password.html', token=token)

    @app.route('/clientes-fornecedores/', methods=['GET', 'POST'])
    def clientes_fornecedores():
        if request.method == 'GET':
            cadastros = ClientesFornecedores.query.all()
            error = "Não há clientes ou fornecedores cadastrados"
            if cadastros:
                return render_template("clientes-fornecedores.html", cadastros=cadastros)
            return render_template("clientes-fornecedores.html", error=error)

    @app.route('/clientes-fornecedores/add', methods=['GET', 'POST'])
    def add_clientes_fornecedores():
        if request.method == 'GET':
            clientes = ClientesFornecedores.query.all()
            error = "Não há clientes ou fornecedores cadastrados"
            if clientes:
                return render_template("example_cadastro_clientes-fornecedores.html", clientes=clientes)

        if request.method == 'POST':
            cnpj = request.form['cnpj']
            razao_social = request.form['razao_social']
            nome_fantasia = request.form['nome_fantasia']
            tipo = request.form['tipo']
            cep = request.form['cep']
            endereco_rua = request.form['endereco_rua']
            endereco_numero = request.form['endereco_numero']
            cidade = request.form['cidade']
            estado = request.form['estado']
            telefone = request.form['telefone']
            celular = request.form['celular']
            email = request.form['email']
            cnpj_existe = ClientesFornecedores.query.filter_by(
                cnpj=cnpj).first()
            if cnpj_existe:
                error = 'Cliente ou fornecedor já cadastrado.'
                return render_template('example_cadastro_clientes-fornecedores.html', error=error)
            novo_cadastro = ClientesFornecedores(cnpj=cnpj,
                                                 razao_social=razao_social,
                                                 nome_fantasia=nome_fantasia,
                                                 tipo=tipo,
                                                 cep=cep,
                                                 endereco_rua=endereco_rua,
                                                 endereco_numero=endereco_numero,
                                                 cidade=cidade,
                                                 estado=estado,
                                                 telefone=telefone,
                                                 celular=celular,
                                                 email=email)
            db.session.add(novo_cadastro)
            db.session.commit()
            success = 'Cadastro efetuado com sucesso.'
            return render_template("example_cadastro_clientes-fornecedores.html", success=success)

        return render_template("example_cadastro_clientes-fornecedores.html", error=error)
