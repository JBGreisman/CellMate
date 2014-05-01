import os
from flask import Flask, Response, request
import psycopg2
from db_manager import db, User, Data
import countColonies
import base64
import cv2

app = Flask(__name__)
#app.config['SQLALCHEMY_DATABASE_URI'] = os.environ['DATABASE_URL']
#db.init_app(app)

@app.route("/")
def hello():
	#user = 'Hana'
	#uid = User.get_uid(user)
	#data = Data.get_user_data(uid)
	#total = 0
	#for row in data:
	#	total = total + row.count

	#return 'Hello ' + user + '! You have counted ' + str(total) + ' colonies'
	return 'hello, world'
	#imgBytes = open('plate.png', 'rb').read()
	#resp = count_colonies(52,207,imgBytes)
	#return resp.status


@app.route('/count/<int:x>/<int:y>', methods=['GET'])
def count_colonies(x,y):
	image = request.data
	open('img.png', 'wb').write(image)

	#WORKED WITHOUT RUNNING GABES CODE AND USING  image DIRECTLY INSTEAD OF READING THE FILE

	(count, thresh_img) = countColonies.processImage('img.png', x, y)
	#cv2.imwrite('thresh_img.png', thresh_img)

	#return count
	enc_thresh_img = open('img.png', 'rb').read()
	#enc_thresh_img = open('thresh_img.png', 'rb').read()
	resp = Response(enc_thresh_img, status=count, mimetype='image/png')
	return resp


if __name__ == "__main__":
	app.run(debug=True)