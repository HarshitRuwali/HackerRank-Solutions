
n = int(input())

a = []
b = []

for i in range(0, n):
    a.append([x for x in input().split()])

for j in range(0, n):
    b.append([y for y in input().split()])

a = np.array(a, int)
b = np.array(b, int)

print(np.matmul(a, b)) #the prob says matrix multiplication only(NO dot or NO cross)