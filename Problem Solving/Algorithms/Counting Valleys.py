#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    
    step = 0
    count_valley = 0

    for i in s:
        if i == "U":
            step+=1
        else:
            step-=1

        if i == "U" and step == 0:
            count_valley += 1
  
    return count_valley


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
