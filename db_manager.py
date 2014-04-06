from flask.ext.sqlalchemy import SQLAlchemy
 
db = SQLAlchemy()
 
class User(db.Model):
	__tablename__ = 'USERS'
	uid = db.Column(db.Integer, primary_key = True)
	name = db.Column(db.String(50), unique = True)

	def __init__(self, name):
		self.name = name

	#gets the uid associated with the username, or None if no user exists
	@staticmethod
	def get_uid(username):
		user = User.query.filter_by(name = username).first()
		if user:
			return user.uid
		else:
			return None

	#creates user with the given username if it doesn't already exists
	@staticmethod
	def create_user(username):
		#can't add duplicate users
		if get_uid(username):
			return False
		db.session.add(User(username))
		db.session.commit()
		return True