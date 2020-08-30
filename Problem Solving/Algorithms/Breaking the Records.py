#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    max_count = [scores[0]]
    min_count = [scores[0]]
    
    for i in scores[1:]:
        if i < min_count[-1]:
            min_count.append(i)
        if i > max_count[-1]:
            max_count.append(i)
            
    return str(len(max_count)-1), str(len(min_count)-1)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
