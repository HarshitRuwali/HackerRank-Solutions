# Enter your code here. Read input from STDIN. Print output to STDOUT
#(n, m) = map(int, raw_input().split())
'''
(n, m) = map(int, int)
array = map(int, int)
assert len(array) == n
A = set(map(int, int)
assert len(A) == m
B = set(map(int, int)
assert len(B) ==m
happiness = 0

for i in array:
    if i in A:
        happiness += 1
    elif i in B:
        happiness -= 1

print (happiness)
'''
n, m = (int(i) for i in input().split())

l = map(int, input().strip().split(' '))

a = set(map(int, input().strip().split(' ')))

b = set(map(int, input().strip().split(' ')))

result = 0

for i in l:

    if i in a:

        result += 1

    if i in b:

        result += -1

print(result)
