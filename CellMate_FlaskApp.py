import os
from flask import Flask
import psycopg2
from flask.ext.sqlalchemy import SQLAlchemy
#from db_manager import db

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = os.environ['DATABASE_URL']
#db.app =  app
db = SQLAlchemy(app)

class User(db.Model):
  __tablename__ = 'USERS'
  uid = db.Column(db.Integer, primary_key = True, auto_increment = True)
  name = db.Column(db.String(50), unique = True)
   
  def __init__(self, name):
    self.name = name

@app.route("/")
def hello():
    return "Welcome to CellMate!"

if __name__ == "__main__":	
	app.run()