import os
from flask import Flask, Response, request
import psycopg2
from db_manager import db, User, Data
import countColonies
import base64
#import cv2

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
	image = base64.b64decode(request.data)
	open('img.png', 'wb').write(image)

	(count, thresh_img) = countColonies.processImage('img.png', x, y)
	return 'request recieved'
	#cv2.imwrite('thresh_img.png', thresh_img)

	#enc_thresh_img = base64.b64encode(open('img.png', 'rb').read())
	#enc_thresh_img = base64.b64encode(image)
	#enc_thresh_img = image
	#enc_thresh_img = base64.b64encode(open('thresh_img.png', 'rb').read())
	#resp = Response(enc_thresh_img, status=count, mimetype='image/png')
	#return resp


if __name__ == "__main__":
	app.run(debug=True)