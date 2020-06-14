import numpy as np

n, m = map(int, input().split())

list = []

for i in range(0, n):
    list.append([x for x in input().split()])

arr = np.array(list, int)
print(np.max(np.min(arr, axis = 1), axis = None))
