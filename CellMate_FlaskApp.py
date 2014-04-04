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
	uid = db.Column(db.Integer, primary_key = True)
	name = db.Column(db.String(50), unique = True)

	def __init__(self, name):
		self.name = name

#gets the uid associated with the username, or None if no user exists
def get_uid(username):
	user = User.query.filter_by(name = username).first()
	if user:
		return user.uid
	else:
		return None

#creates user with the given username if it doesn't already exists
def create_user(username):
	#can't add duplicate users
	if get_uid(username):
		return False
	db.session.add(User(username))
	db.session.commit()
	return True


@app.route("/")
def hello():
    return str(get_uid('Hana'))
    #return "CellMate"

if __name__ == "__main__":
	app.run()