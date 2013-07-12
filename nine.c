/*
 * Project Euler.
 * Special Pythagorean triplet
 * Problem 9
 * 
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 * a^2 + b^2 = c^2
 * 
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * 
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

int main( int argc, char * argv[] )
{
    uint32_t a = 3 ;
    uint32_t b = 0 ;
    uint32_t c = 0 ;

    while ( a < 1000 )
    {
        b = a + 1 ;
        while ( b < 1000 )
        {
            c = b + 1 ;
            while ( c < 1000 )
            {
                if ( (1000 == (a+b+c)) && ( ((a*a) + (b*b)) == (c*c) ) )
                {
                    printf( "%d\n", (a*b*c) ) ;
                    printf( "%d %d %d\n", a, b, c ) ;
                    return 0 ;
                }
                c++ ;
            }
            b++ ;
        }
        a++ ;
    }

    return 0 ;
}
