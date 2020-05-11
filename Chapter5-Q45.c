/*
Author is Ibrahim Halil GEZER
5.45 (Testing Math Library Functions) Write a program that tests as many of the math library
functions in Fig. 5.2 as you can. Exercise each of these functions by having your program print out
tables of return values for a diversity of argument values.
*/

#include <stdio.h>
#include <math.h>

int main ( void ) {

 /* calculates and outputs the square root */
 printf( "sqrt(%.1f) = %.1f\n", 100.0, sqrt( 100.0 ) );
 printf( "sqrt(%.1f) = %.1f\n", 16.0, sqrt( 16.0 ) );

 /* calculates and outputs the exponential function e to the x */
 printf( "exp(%.1f) = %f\n", 1.0, exp( 1.0 ) );
 printf( "exp(%.1f) = %f\n", 2.0, exp( 2.0 ) );

 /* calculates and outputs the logarithm (base e) */
 printf( "log(%f) = %.1f\n", 2.718282, log( 2.718282 ) );
 printf( "log(%f) = %.1f\n", 7.389056, log( 7.389056 ) );

 /* calculates and outputs the logarithm (base 10) */
 printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) ); 
 printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
 printf( "log10(%.1f) = %.1f\n", 100.0, log10( 100.0 ) );

 /* calculates and outputs the absolute value */
 printf( "fabs(%.1f) = %.1f\n", 13.5, fabs( 13.5 ) );
 printf( "fabs(%.1f) = %.1f\n", 0.0, fabs( 0.0 ) );
 printf( "fabs(%.1f) = %.1f\n", -13.5, fabs( -13.5 ) );

 /* calculates and outputs ceil( x ) */
 printf( "ceil(%.1f) = %.1f\n", 19.2, ceil( 19.2 ) );
 printf( "ceil(%.1f) = %.1f\n", -19.8, ceil( -19.8 ) );

 /* calculates and outputs floor( x ) */
 printf( "floor(%.1f) = %.1f\n", 19.2, floor( 19.2 ) );
 printf( "floor(%.1f) = %.1f\n", -19.8, floor( -19.8 ) );

 /* calculates and outputs pow( x, y ) */
 printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow( 2.0, 7.0 ) );
 printf( "pow(%.1f, %.2f) = %.2f\n", 9.0, -0.5, pow( 9.0, - (0.5  ) )) ;

 /* calculates and outputs fmod( x, y ) */
 printf( "fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333,
 fmod( 13.675, 2.333 ) );

/* calculates and outputs sin( x ) */
 printf( "sin(%.1f) = %.1f\n", 0.0, sin( 0.0 ) );

 /* calculates and outputs cos( x ) */
 printf( "cos(%.1f) = %.1f\n", 0.0, cos( 0.0 ) );

 /* calculates and outputs tan( x ) */
 printf( "tan(%.1f) = %.1f\n", 0.0, tan( 0.0 ) );
 return 0; /* indicates successful termination */
 } /* end main */
