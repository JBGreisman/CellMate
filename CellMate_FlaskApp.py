import os
from flask import Flask, Response
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
	

	imgBytes = open('screen1.png', 'rb').read()
	count_colonies(1,1,imgBytes)
	return 'done'

@app.route('/count/<int:x>/<int:y>/<image>')
def count_colonies(x, y, image):
	open('img.png', 'wb').write(bytearray(image))
	(count, thresh_img) = countColonies.processImage('img.png', x, y)
	#return jsonify({ 'count': count, 'image': thresh_img})
	#return Response(json.dumps({ 'count': count, 'image': thresh_img}),  mimetype='application/json')
	return Response(thresh_img, status=count, mimetype='image/png')

if __name__ == "__main__":
	app.run(debug=True)