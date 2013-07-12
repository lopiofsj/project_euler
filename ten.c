/*
 * Project Euler.
 * Summation of primes
 * Problem 10
 * 
 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * 
 * Find the sum of all the primes below two million.
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX 2000000

int main( int argc, char * argv[] )
{
    bool marked[MAX] ;
    uint32_t i, j = 0 ;
    long unsigned int sum = 0 ;

    for ( i = 0 ; i < MAX ; i++ )
    {
        marked[i] = false ;
    }

    marked[0] = true ;
    marked[1] = true ;

    // use prime sieve (Sieve of Eratosthenes) to find prime numbers
    for ( i = 2 ; i < MAX ; i++ )
    {
        if ( false == marked[i] )
        {
            for ( j = i+i ; j < MAX ; j += i )
            {
                marked[j] = true ;
            }
        }
    }

    for ( i = 0 ; i < MAX ; i++ )
    {
        if (false == marked[i])
            sum = sum + i ;
    }

    printf( "%lu\n", sum ) ;

    return 0 ;
}
