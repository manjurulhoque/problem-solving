#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    arr.sort()
    minimum = 0
    maximum = 0
    n = len(arr)
    for i in range(n):
        if i < n - 1:
            minimum += arr[i]
        if i > 0:
            maximum += arr[i]

    print(minimum, maximum)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
