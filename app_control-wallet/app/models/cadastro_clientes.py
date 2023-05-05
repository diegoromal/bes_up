###cnpj, nome, razao social, tipo (cliente ou fornecedor), cep, endereço, cidade, estado, telefone, celular, e-mail
from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin


class SigmaCloud_Events(db.Model, SerializerMixin):
    __tablename__ = 'sigmacloud_events'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    condominium = db.Column(db.String(200), nullable=False)
    src_extension = db.Column(db.Numeric(10), unique=True, nullable=False)
    account_code = db.Column(db.Numeric(10), nullable=False)
    door_code = db.Column(db.Numeric(10), nullable=False)
    event_code = db.Column(db.String(10), nullable=False)