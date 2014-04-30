import httplib, urllib, base64

#img = open('plate.png', 'r').read()
img = open("plate.png", "rb").read()
encoded_img = base64.b64encode(img)
#params = urllib.urlencode({'@x': 52, '@y': 207, '@image': img})
#params = urllib.urlencode({'x': 52, 'y': 207})
#params = urllib.urlencode({'image'img)
#print params
conn = httplib.HTTPConnection('cellmate.herokuapp.com')
#conn.request('GET','/count',params)
x = 52
y = 207
url_string = '/count/{0}/{1}'.format(52,207)
print url_string
conn.request('GET', url_string, encoded_img)
res = conn.getresponse()
print res.status
data = res.read()
#open('thresh_plate.png', 'w').write(data)
print data