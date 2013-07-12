/*
 * Project Euler.
 * 10001st prime
 * Problem 7
 * 
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
 * that the 6th prime is 13.
 * 
 * What is the 10001st prime number?
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX 10001

int main( int argc, char *argv[] )
{
	uint32_t counter = 0 ;
	uint32_t i = 0 ;
	uint32_t current_number = 3 ;
    uint32_t primes[MAX] ;
    bool factorable = false ;

    memset( primes, 0x0, MAX * sizeof(uint32_t) ) ;

    primes[counter] = 2 ;
    counter++ ;

    while ( counter < MAX )
    {
        factorable = false ;
        for ( i = 0 ; i < counter ; i++ )
        {
            if ( (current_number % primes[i]) == 0 )
            {
                factorable = true ;
                break ;
            }
        }
        if ( false == factorable )
        {
            primes[counter] = current_number ;
            counter++ ;
        }
        current_number += 2 ;
    }

    printf( "%d\n", primes[counter-1] ) ;

    return 0 ;
}
