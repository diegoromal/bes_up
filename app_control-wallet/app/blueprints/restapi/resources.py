from flask import jsonify, abort, request, Response
from flask_restful import Resource
from app.models.cadastro_clientes_fornecedores import CadastroClientesFornecedores
from app.extensions.database import db


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


class CadastroClientesFornecedoresAddResource(Resource):
    def post(self):
        cadastro = CadastroClientesFornecedores(request.form['cnpj'],
                                                request.form['razao_social'],
                                                request.form['nome_fantasia'],
                                                request.form['tipo'],
                                                request.form['cep'],
                                                request.form['endereco_rua'],
                                                request.form['endereco_numero'],
                                                request.form['cidade'],
                                                request.form['estado'],
                                                request.form['telefone'],
                                                request.form['celular'],
                                                request.form['email']) or abort(
            404
        )
        db.session.add(cadastro)
        db.session.commit()
        return jsonify(cadastro.to_dict())
