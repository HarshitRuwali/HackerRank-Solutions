#!/bin/python3

import sys

try:
    print(int(input().strip()))
except ValueError:
    print("Bad String")

