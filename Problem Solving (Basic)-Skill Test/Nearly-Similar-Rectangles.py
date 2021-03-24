#!/bin/python3


# Here my code ran successfully for 10 test cases, but for the 5, time limit exceeded


import math
import os
import random
import re
import sys



#
# Complete the 'nearlySimilarRectangles' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts 2D_LONG_INTEGER_ARRAY sides as parameter.
#

def nearlySimilarRectangles(sides):
    # Write your code here
    
    count = 0
    # print(sides)
    # for i in sides:
    #     print(i)
    
    rows = len(sides)
    
    if rows == 0:
        return 0
    
    for i in range(rows):
        for j in range(i + 1, rows):
            if (sides[i][0] * sides[j][1] == sides[i][1] * sides[j][0]):
                count += 1
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    sides_rows = int(input().strip())
    sides_columns = int(input().strip())

    sides = []

    for _ in range(sides_rows):
        sides.append(list(map(int, input().rstrip().split())))

    result = nearlySimilarRectangles(sides)

    fptr.write(str(result) + '\n')

    fptr.close()
