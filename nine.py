#
# Project Euler.
# Special Pythagorean triplet
# Problem 9
# 
# A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
# a^2 + b^2 = c^2
# 
# For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
# 
# There exists exactly one Pythagorean triplet for which a + b + c = 1000.
# Find the product abc.
#

import sys
a = 3
b = 0
c = 0

while a <= 332:
	b = a + 1
	while b <= 498:
		c = b + 1
		while c <= 993:
			if (a+b+c == 1000) and (a*a + b*b) == (c*c):
				print (a*b*c)
				print a,b,c
				sys.exit(0)
			c = c + 1
		b = b + 1
	a = a + 1
