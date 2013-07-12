/*
 * Project Euler
 * Largest prime factor
 * Problem 3
 * The prime factors of 13195 are 5, 7, 13 and 29.  
 * What is the largest prime factor of the number 600851475143 ?
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

int find_primes( unsigned long max_primes, unsigned long* primes_array )
{
	unsigned int counter = 0 ;
	unsigned int current_number = 3 ;
	unsigned int i = 0 ;
	
	if ( max_primes <= 0 )
		return counter ; // nothing to do

	// else

	// go through every number
	primes_array[counter] = 2 ;
	counter++ ;

	bool factorable = false ;
	while ( counter < max_primes )
	{
		factorable = false ;
		for ( i = 0 ; i < counter && !factorable ;  i++ )
		{
			if ( current_number % primes_array[i] == 0 )
			{
				factorable = true ;
			}
		}

		if (!factorable)
		{
			primes_array[counter] = current_number ;
			counter++ ;
		}

		current_number += 2 ;
	}

	return counter ;
}


int main( int argc, char *argv[] )
{
	const unsigned long NUMBER = 600851475143 ;
	const unsigned long ARRAY_SIZE = 6000 ;
	unsigned long primes[ARRAY_SIZE] ;
	unsigned int total_primes = 0 ;
	unsigned long max_prime_factor = 0 ;
	memset( &primes[0], 0x0, ARRAY_SIZE * sizeof(long) ) ;
	unsigned int i = 0 ;

	// find the prime numbers contained within the number
	total_primes = find_primes( ARRAY_SIZE, &primes[0] ) ;
	
	for( i = 0 ; i < total_primes ; i++ )
		if ( NUMBER % primes[i] == 0 )
			max_prime_factor = primes[i] ;

	printf( "Max prime factor = %lu\n", max_prime_factor ) ;

	return 0 ;
}
