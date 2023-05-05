from app.extensions.database import db


def init_app(app):
    @app.cli.command()
    def createdb():
        """Creates database"""
        c = db.create_all()
        print(c)
        print(app.config['SQLALCHEMY_DATABASE_URI'])