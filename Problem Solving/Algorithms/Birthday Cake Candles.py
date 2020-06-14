#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the birthdayCakeCandles function below.

from collections import Counter

def birthdayCakeCandles(n, ar):
    d = Counter(ar)
    largest_key = max(Counter.keys(d))
    return d.get(largest_key)
   
n = int(input().strip())
ar = list(map(int, input().strip().split(' ')))
result = birthdayCakeCandles(n, ar)
print(result)
