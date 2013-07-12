#
# Project Euler
# Largest palindrome product
# Problem 4
# A palindromic number reads the same both ways. The largest palindrome made
# from the product of two 2-digit numbers is 9009 = 91 × 99.
# Find the largest palindrome made from the product of two 3-digit numbers.
#

largest = 0

MIN = 100
MAX = 1000
for x in range(MIN,MAX,1):
	for y in range(MIN,MAX,1):
		product = str(x * y)
		found = True
		for i in range(len(product)/2):
			if not product[i] == product[len(product)-i-1]:
				found = False
				break
		if found and (int(largest) < int(product)):
			largest = product


print largest
