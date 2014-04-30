import httplib, urllib

img = open('plate.png', 'r').read()
#params = urllib.urlencode({'@x': 52, '@y': 207, '@image': img})
#params = urllib.urlencode({'x': 52, 'y': 207})
#print params
conn = httplib.HTTPConnection('cellmate.herokuapp.com')
#conn.request('GET','/count',params)
conn.request('GET','/count/{0}/{1}'.format(52,207))
res = conn.getresponse()
#print res.status
data = res.read()
#open('thresh_plate.png', 'w').write(data)
print data