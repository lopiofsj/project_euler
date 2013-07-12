MAX = 2000000
# marked that it is not a prime
marked = [False]*MAX
marked[0] = True
marked[1] = True

for i in range(2,MAX):
	if not marked[i]:
		for j in range(i+i,MAX,i):
			marked[j] = True

#print the primes
sum = 0
primes = []
for (n,m) in enumerate(marked):
	if not m:
		sum = sum + n
		primes.append( n )
print sum
	
