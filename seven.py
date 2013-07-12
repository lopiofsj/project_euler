#
# Project Euler.
# 10001st prime
# Problem 7
# 
# By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
# that the 6th prime is 13.
# 
# What is the 10001st prime number?
#

primes = [2,]
counter = 1
current_number = 3

while counter < 10001:
#while counter < 6:
	factorable = False
	for pn in primes:
		if (current_number % pn) == 0:
			factorable = True
			break
	if not factorable:
		primes.append(current_number)
		counter = counter + 1
	
	current_number = current_number + 2


print primes[counter-1]
