import httplib, urllib, base64, json

#hard-coded params (can be any coords and png image)
x = 52
y = 207
img = open("plate.png", "rb").read() #read binary, not regular

#send request
#encoded_img = base64.b64encode(img)
encoded_img = img
conn = httplib.HTTPConnection('cellmate.herokuapp.com')
url_string = '/count/{0}/{1}'.format(x,y)
conn.request('GET', url_string, encoded_img)

#get response
response = conn.getresponse()
resp_json = json.loads(response.read())

count = int(resp_json['count'])

enc_thresh_img = str(resp_json['thresh_img'])
thresh_img = base64.b64decode(enc_thresh_img)
open('thresh_plate.png', 'wb').write(thresh_img)

print 'threshholded image saved to thresh_plate.png, count = ' + str(count)
