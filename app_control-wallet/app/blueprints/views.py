from flask import abort, render_template
from app.models.sigmacloud import SigmaCloud_Data, SigmaCloud_Events


def init_app(app):
    @app.route("/")
    def index():
        events = SigmaCloud_Events.query.all() or abort(
            404, "Não foram encontrados eventos cadastrados"
        )
        return render_template("index.html", events=events)

    @app.route("/sigmacloud-data/")
    def sigmacloudData():
        data = SigmaCloud_Data.query.all() or abort(
            404, "Não foram encontrados dados cadastrados"
        )
        return render_template("sigmacloud-data.html", data=data)

    @app.route("/sigmacloud-events/")
    def sigmacloudEvents():
        events = SigmaCloud_Events.query.all() or abort(
            404, "Não foram encontrados eventos cadastrados"
        )
        return render_template("sigmacloud-events.html", events=events)
