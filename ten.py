#
# Project Euler.
# Summation of primes
# Problem 10
# 
# The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
# 
# Find the sum of all the primes below two million.
#

MAX = 2000000
# marked that it is not a prime
marked = [False]*MAX
marked[0] = True
marked[1] = True

# use prime sieve (Sieve of Eratosthenes) to find prime numbers
for i in range(2,MAX):
	if not marked[i]:
		for j in range(i+i,MAX,i):
			marked[j] = True

sum = 0
for (n,m) in enumerate(marked):
	if not m:
		sum = sum + n
print sum
	

