/*
 * Project Euler.
 * Multiples of 3 and 5
 * Problem 1
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we
 * get 3, 5, 6 and 9. The sum of these multiples is 23.  Find the sum of all the
 * multiples of 3 or 5 below 1000.
 */

#include <stdio.h>
#include <stdint.h>
int main( int argc, char *argv[] )
{
	uint32_t i = 0 ;
	uint32_t sum = 0 ;
	static const uint32_t MAX = 1000 ;

	for ( i = 0 ; i < MAX ; i++ )
	{
		if ( ((i % 3) == 0) || ((i % 5) == 0) )
			sum += i ;
	}

	printf( "The sum is %u\n", sum ) ;

	return 0 ;
}
