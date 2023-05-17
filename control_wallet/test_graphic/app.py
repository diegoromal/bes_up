from flask import Flask, render_template

app = Flask(__name__)


@app.route('/')
def index():
    # Dados do backend
    data_from_backend = [
        {'category': 'item-1', 'value': 80},
        {'category': 'item-2', 'value': 50},
        {'category': 'item-3', 'value': 20}
    ]

    return render_template('chart.html', data=data_from_backend)


if __name__ == '__main__':
    app.run()
