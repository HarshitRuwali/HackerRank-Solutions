import numpy as np

n=int(input())

a=np.array([input().split() for _ in range(n)],float)

np.set_printoptions(legacy='1.13') #important for passing test case 1

print(np.linalg.det(a))
