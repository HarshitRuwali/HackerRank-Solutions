import numpy as np

np.set_printoptions(sign=' ')

n, m = map(int, input().split())

a = np.array([input().split() for _ in range(n)], float)

print(np.mean(a, axis= 1), np.var(a, axis= 0), np.around(np.std(a), 12), sep = '\n')