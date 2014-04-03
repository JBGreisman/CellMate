import os
from flask import Flask
#from db_manager import db, User

def create_app():
	app = Flask(__name__)
	#loads the db connection string from a file and initializes the db connection
	#app.config['SQLALCHEMY_DATABASE_URI'] = open('connection.txt', 'r').readline()
	#db.init_app(app)
	#db.app = app
	#return app

#app = create_app()
#print 'app initialized'

#print db.session.query('1').from_statement('SELECT 1').all()
#print User.query.first()

app = Flask(__name__)

@app.route("/")
def hello():
    return "Welcome to the renamed url Python Flask App!"

if __name__ == "__main__":	
	app.run()