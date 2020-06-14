import numpy as np

np.set_printoptions(sign=' ')

arr = np.array(input().split(),float)

print(np.floor(arr), np.ceil(arr), np.rint(arr), sep = '\n')


'''
OR
'''

import numpy as np

arr = np.array(input().split(), float)

print(np.floor(arr), np.ceil(arr), np.rint(arr), sep = '\n')
