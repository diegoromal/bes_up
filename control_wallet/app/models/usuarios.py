from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin


class Users(db.Model, SerializerMixin):
    __tablename__ = 'users'
    id = db.Column(db.Integer(), primary_key=True)
    username = db.Column(db.String(80), unique=True, nullable=False)
    full_name = db.Column(db.String(500), nullable=False)
    email = db.Column(db.String(120), unique=True, nullable=False)
    password = db.Column(db.String(300), nullable=False)
    department = db.Column(db.String(300))
    permissions = db.Column(db.String(300))
