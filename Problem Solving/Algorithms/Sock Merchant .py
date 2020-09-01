#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    sock = {}
    pair = 0

    for i in ar:
        if i not in sock.keys():
            sock[i] = 1
        else:
            sock[i] += 1
    
    for i in sock.keys():
        pair += sock[i]//2
    
    return pair

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
