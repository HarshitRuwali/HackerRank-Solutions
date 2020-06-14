import numpy

arr = input()

n, m = int(arr[0]), arr[1]
list = []

for i in range(0, n):
    line  = input().split()
    list.append([j for j in line])

arr = numpy.array(list, int)
print((numpy.transpose(arr)), (arr.flatten()), sep = '\n')