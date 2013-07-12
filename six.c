/*
 * Sum square difference
 * Problem 6
 * 
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... + 10^2 = 385
 * 
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^2 = 552 = 3025
 * 
 * Hence the difference between the sum of the squares of the first ten natural
 * numbers and the square of the sum is 3025 − 385 = 2640.
 * 
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 *
 */

#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main( int argc, char *argv[] )
{
	uint32_t i = 0 ;
	uint32_t sum_of_squares = 0 ;
	uint32_t square_of_sum = 0 ;
	static const uint32_t MAX = 100 ;
    int32_t diff = 0 ;

    for ( i = 1 ; i <= MAX ; i++ )
    {
        sum_of_squares += (i*i) ;
        square_of_sum += i ;
    }

    square_of_sum *= square_of_sum ;

    diff = square_of_sum - sum_of_squares ;
    printf( "The difference is (%d)\n", diff ) ;

    return 0 ;
}
