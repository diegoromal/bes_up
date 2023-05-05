from flask import jsonify, abort
from flask_restful import Resource
from app.models.cadastro_clientes_fornecedores import CadastroClientesFornecedores


class CadastroClientesFornecedoresResource(Resource):
    def get(self):
        cadastro_clientes_fornecedores = CadastroClientesFornecedores.query.all() or abort(204)
        return jsonify(
            {'cadastros': [
                cadastros.to_dict()
                for cadastros in cadastro_clientes_fornecedores
            ]}
        )


class CadastroClientesFornecedoresIdResource(Resource):
    def get(self, cadastro_id):
        cadastro = CadastroClientesFornecedores.query.filter_by(id=cadastro_id).first() or abort(
            404
        )
        return jsonify(cadastro.to_dict())
