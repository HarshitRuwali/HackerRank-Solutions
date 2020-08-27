#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    apple = 0
    orange = 0
    for i in apples:
        if s <= i+a <= t:
            apple += 1

    for i in oranges:
        if s <= i+b <= t:
            orange+=1

    return apple, orange

if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    total = countApplesAndOranges(s, t, a, b, apples, oranges)

    print("\n".join(map(str, total)))
