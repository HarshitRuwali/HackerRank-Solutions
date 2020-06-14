import numpy

arr = input().split()

n, m, p = map(int, arr)

list = []

for i in range(0, n + m):
    list.append([x for x in input().split])

print(numpy.array(list, int))