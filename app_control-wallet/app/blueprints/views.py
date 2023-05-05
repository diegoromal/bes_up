from flask import abort, render_template
# from app.models.cadastro_clientes import


def init_app(app):
    @app.route("/")
    def index():
        # events = SigmaCloud_Events.query.all() or abort(
        #     404, "Não foram encontrados eventos cadastrados"
        # )
        return render_template("index.html")
