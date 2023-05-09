from flask import Blueprint
from flask_restful import Api

from .resources import *
# ClientesFornecedoresResource, ClientesFornecedoresIdResource


bp = Blueprint("restapi", __name__, url_prefix="/api/v1")
api = Api(bp)
api.add_resource(ClientesFornecedoresResource,
                 "/cadastros/clientes_fornecedores/")
api.add_resource(ClientesFornecedoresIdResource,
                 "/cadastros/<cadastro_id>/")
api.add_resource(ClientesFornecedoresAddResource,
                 "/cadastros/clientes_fornecedores/add/")
api.add_resource(ClientesFornecedoresEditResource,
                 "/cadastros/clientes_fornecedores/edit/")


def init_app(app):
    app.register_blueprint(bp)
