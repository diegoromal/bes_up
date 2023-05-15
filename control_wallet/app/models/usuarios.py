from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin


class Users(db.Model, SerializerMixin):
    __tablename__ = 'usuarios'
    id = db.Column(db.Integer(), primary_key=True)
    usuario = db.Column(db.String(80), unique=True, nullable=False)
    nome = db.Column(db.String(500), nullable=False)
    email = db.Column(db.String(120), unique=True, nullable=False)
    senha = db.Column(db.String(300), nullable=False)
    departamento = db.Column(db.String(300))
    permissoes = db.Column(db.String(300))
