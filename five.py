#
# Project Euler
# Smallest multiple
# Problem 5
# 
# 2520 is the smallest number that can be divided by each of the numbers
# from 1 to 10 without any remainder.
# 
# What is the smallest positive number that is evenly divisible by all
# of the numbers from 1 to 20?
#  

import math
# instead of brute forcing it, we look at the prime factorization of the
# numbers between 1-20 and use the largest power of each prime
print math.pow(2,4) * math.pow(3,2) * 5 * 7 * 11 * 13 * 17 * 19
