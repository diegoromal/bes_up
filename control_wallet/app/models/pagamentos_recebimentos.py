from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin
from app.models.clientes_fornecedores import ClientesFornecedores


class FormaDePagamento(db.Model, SerializerMixin):
    __tablename__ = 'forma_de_pagamento'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    nome = db.Column(db.Text(), nullable=False)


class Portador(db.Model, SerializerMixin):
    __tablename__ = 'portador'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    nome = db.Column(db.Text(), nullable=False)


class Categoria(db.Model, SerializerMixin):
    __tablename__ = 'categoria'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    nome = db.Column(db.Text(), nullable=False)


class Pagamentos(db.Model, SerializerMixin):
    __tablename__ = 'pagamentos'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    fornecedor_id = db.Column(
        db.Integer(), db.ForeignKey('clientes_fornecedores.id'), nullable=False)
    fornecedor = db.relationship(ClientesFornecedores, backref='pagamentos')
    descricao = db.Column(db.Text())
    valor = db.Column(db.Numeric(), nullable=False)
    vencimento = db.Column(db.DateTime(), nullable=False)
    forma_de_pagamento_id = db.Column(
        db.Integer(), db.ForeignKey('forma_de_pagamento.id'))
    forma_de_pagamento = db.relationship(
        FormaDePagamento, backref='pagamentos')
    portador_id = db.Column(
        db.Integer(), db.ForeignKey('portador.id'))
    portador = db.relationship(Portador, backref='pagamentos')
    categoria_id = db.Column(
        db.Integer(), db.ForeignKey('categoria.id'))
    categoria = db.relationship(Categoria, backref='pagamentos')
    ocorrencia = (db.Integer())
    situacao = (db.Integer())


class Recebimentos(db.Model, SerializerMixin):
    __tablename__ = 'recebimentos'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    cliente_id = db.Column(
        db.Integer(), db.ForeignKey('clientes_fornecedores.id'), nullable=False)
    cliente = db.relationship(ClientesFornecedores, backref='recebimentos')
    descricao = db.Column(db.Text())
    valor = db.Column(db.Numeric(), nullable=False)
    vencimento = db.Column(db.DateTime(), nullable=False)
    forma_de_pagamento_id = db.Column(
        db.Integer(), db.ForeignKey('forma_de_pagamento.id'))
    forma_de_pagamento = db.relationship(
        FormaDePagamento, backref='recebimentos')
    portador_id = db.Column(
        db.Integer(), db.ForeignKey('portador.id'))
    portador = db.relationship(Portador, backref='recebimentos')
    categoria_id = db.Column(
        db.Integer(), db.ForeignKey('categoria.id'))
    categoria = db.relationship(Categoria, backref='recebimentos')
    ocorrencia = (db.Integer())
    situacao = (db.Integer())
