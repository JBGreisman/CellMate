########################################################################
# countColonies.py
# CellMate, 2014
#
# This program takes an image and (x,y) coordinates from that image and
# counts the number of colonies.
########################################################################

import cv2
import cv2.cv as cv
import numpy as np
import sys

TOLERANCE = 50

def count(pic, px, myX, myY):
    im = cv2.imread(pic)
    #im = cv2.resize(im,(400,400))
    
    hsv = cv2.cvtColor(im,cv2.COLOR_BGR2HSV)
    mask = cv2.inRange(hsv, np.array([px[0]-TOLERANCE,px[1]-TOLERANCE,px[2]-TOLERANCE]), np.array([px[0]+TOLERANCE,px[1]+TOLERANCE,px[2]+TOLERANCE]))
    contours, hierarchy = cv2.findContours(mask,cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
    # cv2.drawContours(mask,contours,-1,(0,255,0),3)
	
	
	
    dist = float("inf")
    
    for c in contours:
        M = cv2.moments(c)
        if ((M['m00']) != 0):
            cx = int(M['m10']/M['m00'])
            cy = int(M['m01']/M['m00'])
        else:
            cx = 0
            cy = 0
            
        tempDist = (abs(myX-cx) * abs(myX-cx)) + (abs(myY-cy) * abs(myY-cy))
        if (tempDist < dist):
            dist = tempDist
            bestFit = c
                
    idealArea = cv2.contourArea(bestFit)
    hull = cv2.convexHull(bestFit)
    hull_area = cv2.contourArea(hull)
    idealSolidity = float(idealArea)/hull_area
                
    goodContours = []
    for c in contours:
        shapeMatch = cv2.matchShapes(bestFit,c,1,0.0)
        if (shapeMatch < 0.2):
            goodContours.append(c)
                        
    contours = goodContours
    goodContours = []
    for c in contours:
        area = cv2.contourArea(c)
        if (abs(idealArea - area) < 20):
            goodContours.append(c)
                                
    contours = goodContours
    goodContours = []
    for c in contours:
        tempArea = cv2.contourArea(c)
        tempHull = cv2.convexHull(c)
        tempHull_area = cv2.contourArea(tempHull)
        if (tempHull_area != 0):
            tempSolidity = float(tempArea)/tempHull_area
        else:
            tempSolidity = float("inf")
                                        
        if (abs(tempSolidity - idealSolidity) < 0.05):
            goodContours.append(c)
                                            
    cv2.drawContours(im,contours,-1,(0,255,0),1)
    # contours, hierarchy = cv2.findContours(thresh,cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
    # cv2.drawContours(im,contours,-1,(0,255,0),3)
            
    return (goodContours, im)

#----------------------------------------------------------------------#

def thresh(picture, myX, myY):
    	img = cv2.imread(picture)
	#img = cv2.resize(img,(400,400))
	hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
	gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
	px = hsv[myX,myY]
	return px

#----------------------------------------------------------------------#

def processImage(pic, myX, myY):

    px = thresh(pic, myX, myY)
    (contours, processed) = count(pic,px,myX,myY)
    numCells = str(len(contours))
    
    return (numCells, processed)
#----------------------------------------------------------------------#

def main():

    pic = sys.argv[1]
    myX = int(sys.argv[2])
    myY = int(sys.argv[3])
    (numCells, processed) = processImage(pic,myX,myY)
    
    ## numCells has the number of cells found by algorithm
    ## processed is the image with the contours drawn on top
    # cv2.imwrite("processed.png", processed) # This line will print out the png image

#----------------------------------------------------------------------#

if  __name__ =='__main__':
    main()
