import numpy as np 

n, m = tuple(map(int, input().split()))

list = []

for i in range(0, n):
    list.append(input().split())

array = np.array(list, int)

print(np.prod(np.sum(array, axis = 0), axis = None))
