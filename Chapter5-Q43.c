/*
5.43 What does the following program do?
////////// ýt calculates multiple of a*b 
/////// But it is useless if b < = 0  
*/

#include <stdio.h>

 int mystery( int a, int b ); /* function prototype */
/* function main begins program execution */
 int main( void )
 {
 int x; /* first integer */
 int y; /* second integer */

 printf( "Enter two integers: " );
 scanf( "%d%d", &x, &y );

 printf( "The result is %d\n", mystery( x, y ) );
 return 0; /* indicates successful termination */
 } /* end main */

 /* Parameter b must be a positive integer
 to prevent infinite recursion */
 int mystery( int a, int b )
 {
 /* base case */
 if ( b == 1 ) {
 return a;
 } /* end if */
 else { /* recursive step */
 return a + mystery( a, b - 1 );
 } /* end else */
 } /* end function mystery */
