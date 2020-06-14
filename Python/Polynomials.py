import numpy as np

polynomial = list(map(float, input().split()))

value = int(input())

print(np.polyval(polynomial, value))
