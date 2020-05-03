/*
5.39 (Recursive Greatest Common Divisor) The greatest common divisor of integers x and y is
the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the
greatest common divisor of x and y. The gcd of x and y is defined recursively as follows: If y is equal
to 0, then gcd(x, y) is x; otherwise gcd(x, y) is gcd(y, x % y) where % is the remainder operator
*/

#include <stdio.h>

int gcd ( int x, int y ) ;

int main ( void ) {
	int num1, num2 ;
	printf ( "Enter a number :  " ) ;
	scanf ( "%d" , &num1 ) ;
	printf ( "Enter a number :  " ) ;
	scanf ( "%d" , &num2 ) ;
	
	printf ("gcd is %d " , gcd ( num1 , num2 ) )  ;
	return 0 ;
	} // end function main 

int gcd ( int x, int y ) {
	
	if ( y == 0  ) {
		return  ( x )  ;
	}	
	else {
		gcd ( y , x % y ) ;
	} 
		
}
