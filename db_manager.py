from flask.ext.sqlalchemy import SQLAlchemy
 
db = SQLAlchemy()
 
class User(db.Model):
  __tablename__ = 'USERS'
  uid = db.Column(db.Integer, primary_key = True)
  name = db.Column(db.String(50), unique = True)
   
  def __init__(self, name):
    self.name = name