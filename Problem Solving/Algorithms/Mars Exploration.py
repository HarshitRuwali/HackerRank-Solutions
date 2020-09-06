#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the marsExploration function below.
def marsExploration(s):
    total = 0
    for i in range(0, len(s), 3):
        if s[i] != "S":
            total+=1
        if s[i+1] != "O":
            total+=1
        if s[i+2] != "S":
            total+=1
    return total
    # return sum(s[i] != "SOS"[i%3] for i in range(len(s)))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = marsExploration(s)

    fptr.write(str(result) + '\n')

    fptr.close()
