import numpy as np 

print(str(numpy.eye(*map(int,input().split()))).replace('1',' 1').replace('0',' 0'))

'''
OR 
'''

import numpy as np

dimentions = tuple(map(int, input().split()))

print(np.eye(dimentions[0], dimentions[1], k = 0))

