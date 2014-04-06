import os
from flask import Flask
import psycopg2
from db_manager import db, User

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = os.environ['DATABASE_URL']
db.init_app(app)

@app.route("/")
def hello():
    return "Hello, Hana. Your id is " + str(User.get_uid('Hana') + '!')

if __name__ == "__main__":
	app.run()