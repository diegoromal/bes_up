from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin


class CadastroClientesFornecedores(db.Model, SerializerMixin):
    __tablename__ = 'cadastro_clientes_fornecedores'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    cnpj = db.Column(db.Numeric(14), unique=True, nullable=False)
    razao_social = db.Column(db.String(), nullable=False)
    nome_fantasia = db.Column(db.String(), nullable=False)
    tipo = db.Column(db.String(), nullable=False)
    cep = db.Column(db.Numeric(8), nullable=False)
    endereco_rua = db.Column(db.String(), nullable=False)
    endereco_numero = db.Column(db.Numeric(10), nullable=False)
    cidade = db.Column(db.String(), nullable=False)
    estado = db.Column(db.String(), nullable=False)
    telefone = db.Column(db.Numeric(10), nullable=False)
    celular = db.Column(db.Numeric(11), nullable=False)
    email = db.Column(db.String(), nullable=False)
