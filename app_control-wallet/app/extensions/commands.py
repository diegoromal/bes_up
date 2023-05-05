from app.extensions.database import db


def init_app(app):
    @app.cli.command()
    def createdb():
        """Creates database"""
        c = db.create_all()
