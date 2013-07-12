import math
s = "%d" % math.pow(2,1000)
sum = 0
for i in range(0,len(s),1):
	sum = sum + int(s[i])
print sum
