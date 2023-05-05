from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin


class Situator_Data(db.Model, SerializerMixin):
    __tablename__ = 'situator_data'
    id = db.Column(db.Integer, primary_key=True, unique=True)
    address = db.Column(db.String(80), unique=True, nullable=False)
    port = db.Column(db.Numeric(5), unique=True, nullable=False)
    token = db.Column(db.String(500), unique=True, nullable=False)


class Situator_Events(db.Model, SerializerMixin):
    __tablename__ = 'situator_events'
    id = db.Column(db.Integer(), primary_key=True, unique=True)
    condominium = db.Column(db.String(200), nullable=False)
    src_extension = db.Column(db.Numeric(10), unique=True, nullable=False)
    account_code = db.Column(db.Numeric(10), nullable=False)
    zone_code = db.Column(db.Numeric(10), nullable=False)
    event_code = db.Column(db.Numeric(10), nullable=False)
