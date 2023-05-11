from flask import jsonify, abort, request, Response
from flask_restful import Resource

from app.models.clientes_fornecedores import ClientesFornecedores
from app.extensions.database import db


class ClientesFornecedoresListResource(Resource):
    def get(self):
        clientes_fornecedores = ClientesFornecedores.query.all() or abort(204)
        return jsonify(
            {'cadastros': [
                cadastros.to_dict()
                for cadastros in clientes_fornecedores
            ]}
        )


class ClientesFornecedoresListCNPJResource(Resource):
    def get(self, cnpj):
        clientes_fornecedores = ClientesFornecedores.query.filter_by(cnpj=cnpj).first() or abort(
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
        cadastro_editar = ClientesFornecedores.query.get(dados['id'])
        cadastro_editar.cnpj = dados['cnpj']
        cadastro_editar.razao_social = dados['razao_social']
        cadastro_editar.nome_fantasia = dados['nome_fantasia']
        cadastro_editar.tipo = dados['tipo']
        cadastro_editar.cep = dados['cep']
        cadastro_editar.endereco_rua = dados['endereco_rua']
        cadastro_editar.endereco_numero = dados['endereco_numero']
        cadastro_editar.cidade = dados['cidade']
        cadastro_editar.estado = dados['estado']
        cadastro_editar.telefone = dados['telefone']
        cadastro_editar.celular = dados['celular']
        cadastro_editar.email = dados['email']
        try:
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})


class ClientesFornecedoresDelResource(Resource):
    def delete(self):
        dados = request.get_json()
        cadastro_excluir = ClientesFornecedores.query.get(dados['id'])
        db.session.delete(cadastro_excluir)
        try:
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})
