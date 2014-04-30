import os
from flask import Flask, Response, request
import psycopg2
from db_manager import db, User, Data
import countColonies

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
	

	imgBytes = open('plate.png', 'rb').read()
	resp = count_colonies(52,207,imgBytes)
	return resp.status

#@app.route('/count/<int:x>/<int:y>/<image>')
#def count_colonies(x, y, image):
#	open('img.png', 'wb').write(bytearray(image))
#	(count, thresh_img) = countColonies.processImage('img.png', x, y)
#	return Response(thresh_img, status=count, mimetype='image/png')

@app.route('/count', methods=['GET'])
def count_colonies():
	#x = request.args.get('x')
	#y = request.args.get('y')
	#image = request.args.get('image', '')
	#open('img.png', 'w').write(image.decode('utf-8'))
	#open('img.png', 'w').write(image)
	#(count, thresh_img) = countColonies.processImage('img.png', x, y)
	#return Response(thresh_img, status=count, mimetype='image/png')
	return request.args.keys()


if __name__ == "__main__":
	app.run(debug=True)