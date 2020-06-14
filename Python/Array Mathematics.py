import numpy as np 

n, m = tuple(map(int, input().split()))

a = np.array([input().split() for i in range(0, n)], int)
b = np.array([input().split() for j in range(0, n)], int)

print(a+b, a-b, a*b, a//b, a % b, a**b, sep='\n')