import os
from flask import Flask
import psycopg2
from flask.ext.sqlalchemy import SQLAlchemy
#from db_manager import db

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = os.environ['DATABASE_URL']
#db.app =  app
db = SQLAlchemy(app)

@app.route("/")
def hello():
    return "Welcome to CellMate!"

if __name__ == "__main__":	
	app.run()