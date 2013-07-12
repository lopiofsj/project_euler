import math

prev_fib = 1
current_fib = 2

current_term = 3

num_digits = math.pow(10,(200-1))


while True:
	if len(str(current_fib)) >= 1000:
		break
	temp = current_fib
	current_fib = current_fib + prev_fib
	prev_fib = temp
	current_term = current_term + 1


print current_term, current_fib
