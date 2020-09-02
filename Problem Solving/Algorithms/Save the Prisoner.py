#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the saveThePrisoner function below.
def saveThePrisoner(n, m, s):
    # if (m > n):
    #     m = m % n
    #     # print(m)
    
    # while (m > 0):
    #     s+=1
    #     m-=1
        
    # # print(m)
    # return s-1   #sample cases are passing but rest is failing
    
    save = (s + m-1) % n
    return save if save != 0 else n

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        nms = input().split()

        n = int(nms[0])

        m = int(nms[1])

        s = int(nms[2])

        result = saveThePrisoner(n, m, s)

        fptr.write(str(result) + '\n')

    fptr.close()
