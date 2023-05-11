from flask import abort, render_template, flash, redirect, url_for

from app.models.clientes_fornecedores import ClientesFornecedores


def init_app(app):
    @app.route("/")
    def index():
        flash('Invalid password provided', 'error')
        return render_template("index.html")
        # clientes_fornecedores = ClientesFornecedores.query.all() or abort(
        #     404, "Não foram encontrados eventos cadastrados"
        # )
        # return render_template("index.html", clientes_fornecedores=clientes_fornecedores)
