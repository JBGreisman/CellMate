import httplib, urllib

img = open('plate.png', 'r').read()
params = urllib.urlencode({'@x': 52, '@y': 207, '@image': img})
conn = httplib.HTTPConnection('http://cellmate.herokuapp.com')
conn.request('GET','/count',params)
res = conn.getresponse()
print res.status
data = res.read()
open('thresh_plate.png', 'w').write(data)