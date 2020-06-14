import numpy as np

numbers = tuple(map(int, input().split()))

print(np.zeros(numbers, dtype = np.int), np.ones(numbers, dtype= np.int), sep = '\n')