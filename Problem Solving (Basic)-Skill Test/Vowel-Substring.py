#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'findSubstring' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. INTEGER k
#

def findSubstring(s, k):
    # Write your code here
    l = len(s)
    count = 0
    vowel = "aeiou"
    
    for i in range(k):
        if(s[i] in vowel):
            count +=1
    
    temp = count
    cur = s[:k]
    for i in range(1, l-k+1):
        if (s[i-1] in vowel):
            temp-=1
        if (s[i+k-1] in vowel):
            temp+=1
        if (count<temp):
            count = temp
            cur=s[i:i+k]
    
    if (count==0):
        return "Not found!"
    
    return cur
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    k = int(input().strip())

    result = findSubstring(s, k)

    fptr.write(result + '\n')

    fptr.close()
