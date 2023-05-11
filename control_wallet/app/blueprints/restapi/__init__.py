from flask import Blueprint
from flask_restful import Api

from .resources.clientes_fornecedores import *
from .resources.usuarios import *


bp = Blueprint("restapi", __name__, url_prefix="/api/v1")
api = Api(bp)

api.add_resource(ClientesFornecedoresListResource,
                 "/cadastros/clientes_fornecedores/list/")
api.add_resource(ClientesFornecedoresListCNPJResource,
                 "/cadastros/clientes_fornecedores/list/<int:cnpj>/")
api.add_resource(ClientesFornecedoresAddResource,
                 "/cadastros/clientes_fornecedores/add/")
api.add_resource(ClientesFornecedoresEditResource,
                 "/cadastros/clientes_fornecedores/edit/")
api.add_resource(ClientesFornecedoresDelResource,
                 "/cadastros/clientes_fornecedores/del/")

api.add_resource(UsuariosListResource, "/usuarios/list/")
api.add_resource(UsuariosAddResource, "/usuarios/add/")
api.add_resource(UsuariosEditResource, "/usuarios/edit/")
api.add_resource(UsuariosDelResource, "/usuarios/del/")


def init_app(app):
    app.register_blueprint(bp)
