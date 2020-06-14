n = int(input())
ar = list(map(int,input().split()))
print(all([x > 0 for x in ar]) and any([str(x) == str(x)[::-1] for x in ar]))