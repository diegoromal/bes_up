from flask import jsonify, abort, request, Response
from flask_restful import Resource

from app.models.usuarios import Users
from app.extensions.database import db


class UsersListResource(Resource):
    def get(self):
        usuarios = Users.query.all() or abort(404)
        return jsonify(
            {'usuarios': [
                usuario.to_dict()
                for usuario in usuarios
            ]}
        )


class UsersAddResource(Resource):
    def post(self):
        dados = request.get_json()
        usuario_novo = Users(usuario=dados['usuario'],
                             nome=dados['nome'],
                             email=dados['email'],
                             senha=dados['senha'],
                             departamento=dados['departamento'],
                             permissoes=dados['permissoes'])
        try:
            db.session.add(usuario_novo)
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})


class UsersEditResource(Resource):
    def put(self):
        dados = request.get_json()
        usuario_editar = Users.query.get(dados['id'])
        usuario_editar.usuario = dados['usuario']
        usuario_editar.nome = dados['nome']
        usuario_editar.email = dados['email']
        usuario_editar.senha = dados['senha']
        usuario_editar.departamento = dados['departamento']
        usuario_editar.permissoes = dados['permissoes']
        try:
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})


class UsersDelResource(Resource):
    def delete(self):
        dados = request.get_json()
        usuario_excluir = Users.query.get(dados['id'])
        db.session.delete(usuario_excluir)
        try:
            db.session.commit()
            return jsonify({'status': 'success'})
        except:
            return jsonify({'status': 'error'})
