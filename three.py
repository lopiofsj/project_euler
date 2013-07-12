#
# Project Euler
# Largest prime factor
# Problem 3
# The prime factors of 13195 are 5, 7, 13 and 29.  
# What is the largest prime factor of the number 600851475143 ?

def get_prime_numbers( max_primes = 1000):
	primes = [2,]
	counter = 1
	current_number = 3

	while counter < max_primes:
		factorable = False
		for pn in primes:
			if (current_number % pn) == 0:
				factorable = True
				break
		if not factorable:
			primes.append(current_number)
			counter = counter + 1
		
		current_number = current_number + 2
	
	return primes


# NUMBER = 13195 # testing number
NUMBER = 600851475143
current_number = NUMBER

prime_numbers = get_prime_numbers(2000)

largest = 0

for pn in prime_numbers:
	while (current_number % pn) == 0:
		largest = pn
		current_number = current_number / pn


print largest, current_number
