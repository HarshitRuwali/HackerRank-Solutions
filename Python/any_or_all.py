n = int(input())
ar = list(map(int,input().split()))
ar = sorted(ar)
if(ar[0]<=0):
    print(False)
else:
    chk = False
    for i in ar:
        s = str(i)
        if (s==s[::-1]):
            chk = True
            break
    print(chk)

