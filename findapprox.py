import cv2 
import numpy

img = cv2.imread('graph.png')
cv2.imshow('image',img)

ret, thresh = cv2.threshold(img,100,255,cv2.THRESH_BINARY_INV)

cv2.imshow('thresh',thresh)

key = cv2.waitKey(0)
if key=='q':
	cv2.destroyAllWindows()

