import numpy

array = input()
array = numpy.array(array.split(), int)

print(numpy.reshape(array, (3,3)))

