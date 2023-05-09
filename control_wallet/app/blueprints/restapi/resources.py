from flask import jsonify, abort, request, Response
from flask_restful import Resource

from app.models.clientes_fornecedores import ClientesFornecedores
from app.extensions.database import db


class ClientesFornecedoresResource(Resource):
    def get(self):
        clientes_fornecedores = ClientesFornecedores.query.all() or abort(204)
        return jsonify(
            {'cadastros': [
                cadastros.to_dict()
                for cadastros in clientes_fornecedores
            ]}
        )


class ClientesFornecedoresIdResource(Resource):
    def get(self, cadastro_id):
        clientes_fornecedores = ClientesFornecedores.query.filter_by(id=cadastro_id).first() or abort(
            204
        )
        return jsonify(clientes_fornecedores.to_dict())


class ClientesFornecedoresAddResource(Resource):
    def post(self):
        dados = request.get_json()
        cadastro_novo = ClientesFornecedores(cnpj=dados['cnpj'],
                                             razao_social=dados['razao_social'],
                                             nome_fantasia=dados['nome_fantasia'],
                                             tipo=dados['tipo'],
                                             cep=dados['cep'],
                                             endereco_rua=dados['endereco_rua'],
                                             endereco_numero=dados['endereco_numero'],
                                             cidade=dados['cidade'],
                                             estado=dados['estado'],
                                             telefone=dados['telefone'],
                                             celular=dados['celular'],
                                             email=dados['email'])
        try:
            db.session.add(cadastro_novo)
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})


class ClientesFornecedoresEditResource(Resource):
    def put(self):
        dados = request.get_json()
        cadastro_editar = ClientesFornecedores.update().values(
            cnpj=dados['cnpj'],
            razao_social=dados['razao_social'],
            nome_fantasia=dados['nome_fantasia'],
            tipo=dados['tipo'],
            cep=dados['cep'],
            endereco_rua=dados['endereco_rua'],
            endereco_numero=dados['endereco_numero'],
            cidade=dados['cidade'],
            estado=dados['estado'],
            telefone=dados['telefone'],
            celular=dados['celular'],
            email=dados['email']).where(ClientesFornecedores.id == dados['id'])
        try:
            db.session.add(cadastro_editar)
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})
