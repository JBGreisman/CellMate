import httplib, urllib

img = open('plate.png', 'r').read()
#params = urllib.urlencode({'@x': 52, '@y': 207, '@image': img})
params = urllib.urlencode({'x': 52, 'y': 207})
print params
conn = httplib.HTTPConnection('cellmate.herokuapp.com')
conn.request('GET','/count',params)
res = conn.getresponse()
#print res.status
data = res.read()
#open('thresh_plate.png', 'w').write(data)
print data