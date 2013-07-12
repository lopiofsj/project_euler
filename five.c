/*
 * Project Euler
 * Smallest multiple
 * Problem 5
 * 
 * 2520 is the smallest number that can be divided by each of the numbers
 * from 1 to 10 without any remainder.
 * 
 * What is the smallest positive number that is evenly divisible by all
 * of the numbers from 1 to 20?
 *  
 */

#include <stdio.h>
#include <math.h>

int main( int argc, char *argv[] )
{
    unsigned long answer = 0 ;

    // instead of brute forcing it, we look at the prime factorization of the
    // numbers between 1-20 and use the largest power of each prime
    answer = pow(2,4) * pow(3,2) * 5 * 7 * 11 * 13 * 17 * 19 ;
    printf( "The answer is %lu\n", answer ) ;
    return 0 ;
}
