#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the birthday function below.
def birthday(n, s, d, m):
    if m > n:
        return 0
    
    i = j = 0
    window_sum = 0
    
    while j < m:
        window_sum += s[j]
        j += 1
        
    if window_sum == d:
        count = 1
    else:
        count = 0
    
    while j < n:
        window_sum -= s[i]
        window_sum += s[j]
        
        if window_sum == d:
            count += 1
        i += 1
        j += 1
        
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    dm = input().rstrip().split()

    d = int(dm[0])

    m = int(dm[1])

    result = birthday(n, s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()
