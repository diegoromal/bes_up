from flask import abort, render_template
from app.models.cadastro_clientes_fornecedores import CadastroClientesFornecedores


def init_app(app):
    @app.route("/")
    def index():
        cadastro_clientes_fornecedores = CadastroClientesFornecedores.query.all() or abort(
            404, "Não foram encontrados eventos cadastrados"
        )
        return render_template("index.html", cadastro_clientes_fornecedores=cadastro_clientes_fornecedores)
