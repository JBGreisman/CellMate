import httplib, urllib, base64

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
count = response.status
enc_thresh_img = response.read()
print enc_thresh_img
thresh_img = enc_thresh_img
#thresh_img = base64.b64decode(enc_thresh_img)
open('thresh_plate.png', 'wb').write(thresh_img)
print 'threshholded image saved to thresh_plate.png, count = ' + str(count)
