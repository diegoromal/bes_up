from flask import Blueprint
from flask_restful import Api

from .resources import CadastroClientesFornecedoresResource, CadastroClientesFornecedoresIdResource


bp = Blueprint("restapi", __name__, url_prefix="/api/v1")
api = Api(bp)
api.add_resource(CadastroClientesFornecedoresResource,
                 "/cadastros/clientes_fornecedores/")
api.add_resource(CadastroClientesFornecedoresIdResource,
                 "/cadastros/<cadastro_id>/")


def init_app(app):
    app.register_blueprint(bp)
