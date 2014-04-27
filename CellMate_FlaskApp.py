import os
from flask import Flask
import psycopg2
from db_manager import db, User, Data
import cv2

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = os.environ['DATABASE_URL']
db.init_app(app)

@app.route("/")
def hello():
	user = 'Hana'
	uid = User.get_uid(user)
	data = Data.get_user_data(uid)
	total = 0
	for row in data:
		total = total + row.count

	return 'Hello ' + user + '! You have counted ' + str(total) + ' colonies'

if __name__ == "__main__":
	app.run()