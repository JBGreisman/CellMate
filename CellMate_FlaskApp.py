import os
from flask import Flask
import psycopg2
from db_manager import db, User, Data

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = os.environ['DATABASE_URL']
db.init_app(app)

@app.route("/")
def hello():
	user = 'Hana'
	uid = User.get_uid(user)
	data = Data.get_user_data(uid)

	return 'Hello ' + user + '! You have ' + str(len(data)) + ' count(s)'

if __name__ == "__main__":
	app.run()