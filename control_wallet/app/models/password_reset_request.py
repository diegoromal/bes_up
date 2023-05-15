from app.extensions.database import db
from sqlalchemy_serializer import SerializerMixin
from datetime import datetime, timedelta


class PasswordResetRequest(db.Model, SerializerMixin):
    __tablename__ = 'password_reset_request'
    id = db.Column(db.Integer, primary_key=True)
    email = db.Column(db.String(120), nullable=False)
    token = db.Column(db.String(120), nullable=False)
    created_at = db.Column(db.DateTime, nullable=False,
                           default=datetime.utcnow)
    expired = db.Column(db.Boolean, nullable=False, default=False)

    def is_expired(self):
        expiration_time = self.created_at + timedelta(hours=1)
        return datetime.utcnow() > expiration_time
