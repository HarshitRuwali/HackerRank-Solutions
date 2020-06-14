s = list(input())

s.sort(key=lambda c: ( (c.isdigit() and int(c) % 2 == 0), (c.isdigit() and int(c) % 2 == 1), c.isupper(), c.islower(), c ) )

print(*s, sep = '')