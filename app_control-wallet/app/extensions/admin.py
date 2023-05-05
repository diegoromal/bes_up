from flask_admin import Admin
from flask_admin.base import AdminIndexView
from flask_admin.contrib import sqla
from flask_simplelogin import login_required


from app.extensions.database import db
# from app.models.sigmacloud import SigmaCloud_Data, SigmaCloud_Events
# from app.models.situator import Situator_Data, Situator_Events


# Proteger o admin com login via Monkey Patch
AdminIndexView._handle_view = login_required(AdminIndexView._handle_view)
sqla.ModelView._handle_view = login_required(sqla.ModelView._handle_view)
admin = Admin()


def init_app(app):
    admin.name = app.config.TITLE
    admin.template_mode = "bootstrap4"
    admin.init_app(app)
    # admin.add_view(sqla.ModelView(SigmaCloud_Data, db.session))
    # admin.add_view(sqla.ModelView(SigmaCloud_Events, db.session))
    # admin.add_view(sqla.ModelView(Situator_Data, db.session))
    # admin.add_view(sqla.ModelView(Situator_Events, db.session))
