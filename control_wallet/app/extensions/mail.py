from flask_mail import Mail, Message


def init_app(app):
    mail = Mail(app)

    def send_password_reset_email(user, reset_url):
        msg = Message('Redefinição de senha', recipients=[user.email])
        msg.body = f'Olá {user.username}, clique no link abaixo para redefinir sua senha:\n{reset_url}'
        mail.send(msg)
