/*
Author is : Ibrahim Halil GEZER
5.44 After you determine what the program of Exercise 5.43 does, modify the program to function
properly after removing the restriction of the second argument being nonnegative.
*/ // We can solve this problem easily using fabs function.

#include <stdio.h>
#include <math.h>

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
	 if ( b == 1 ) {
 		return a;
 	} /* end if */
 	if ( b == 0 ) 
 		return b ;
 	
 	
 	else { /* recursive step */
 		if ( b < 0 ) 
 			b = fabs ( b ) ;
 			
 		return - ( a + mystery( a, b - 1 ) ) ;
		 } /* end else */
 	} /* end function mystery */
