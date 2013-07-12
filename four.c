/*
 * Project Euler
 * Largest palindrome product
 * Problem 4
 * A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

int main( int argc, char *argv[] )
{
	// range of numbers used to create the product
    static const uint32_t MIN= 100 ;
    static const uint32_t MAX= 1000 ;

	// numbers used for the product
    uint32_t x = 0 ;
    uint32_t y = 0 ;

    uint32_t largest = 0 ; // largest palindrome

    uint32_t product = 0 ; // the product; Duh!
    uint32_t length = 0 ; // strlen of the product

    for ( x = MIN ; x < MAX ; x++ )
    {
        for ( y = MIN ; y < MAX ; y++ )
        {
            product = x * y ;

			/*
			 * in order to determine if the number is a palindrome, we need to
			 * convert the product to a string, then compare the characters of
			 * the string. To create the string, we need to know the length of
			 * the string, then we can create the string.
			 */
            length = (ceil(log10(product))+1)*sizeof(char) ;
            char str[length] ; 
            memset( str, 0x0, length ) ;
            sprintf( str, "%d", product ) ;

			/*
			 * Now look at the number (string) to determine it's palindromeness.
			 * Start at the front & end and work our way to the middle
			 */
            bool found = true ;
            uint32_t middle = floor(length/2.0) ;
            uint32_t i = 0 ;
            for ( i < 0 ; i < middle ; i++ )
            {
				// the '-2' is because the string is zero based and null terminated
                if ( str[i] != str[length-i-2] )
                {
                    found = false ;
                    break ;
                }
            }

            if ( found && (largest < product) )
            {
                largest = product ; 
            }
        }
    }

    printf( "The answer is (%d)\n", largest ) ;

    return 0 ;
}
