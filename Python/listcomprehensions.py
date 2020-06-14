from itertools import product
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    xd = [i for i in range(x+1)]
    yd = [i for i in range(y+1)]
    zd = [i for i in range(z+1)]
    print([list(x) for x in product(xd,yd,zd) if sum(x)!=n])



