from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin


class ClientesFornecedores(db.Model, SerializerMixin):
    __tablename__ = 'clientes_fornecedores'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    cnpj = db.Column(db.Integer(), unique=True, nullable=False)
    razao_social = db.Column(db.String(), nullable=False)
    nome_fantasia = db.Column(db.String(), nullable=False)
    tipo = db.Column(db.String(), nullable=False)
    cep = db.Column(db.Integer(), nullable=False)
    endereco_rua = db.Column(db.String(), nullable=False)
    endereco_numero = db.Column(db.Integer(), nullable=False)
    cidade = db.Column(db.String(), nullable=False)
    estado = db.Column(db.String(), nullable=False)
    telefone = db.Column(db.Integer(), nullable=False)
    celular = db.Column(db.Integer(), nullable=False)
    email = db.Column(db.String(), nullable=False)
