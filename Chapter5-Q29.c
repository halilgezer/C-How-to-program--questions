/*
Author is : Ibrahim Halil GEZER
5.29 (Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest
integer that evenly divides each of the two numbers. Write function gcd that returns the greatest
common divisor of two integers.
*/

#include <stdio.h>

int gcd (int a , int b  ) ;

int main ( void ) {
	int num1 , num2 ;
	
	printf ( "Enter an integer : ") ;
	scanf ( "%d", &num1  ) ;
	printf ( "Enter an integer : ") ;
	scanf ( "%d", &num2  ) ;
	gcd ( num1, num2 ) ;
	return 0 ;
} // end main 

int gcd (int a , int b  ) {
	int i ;
	int small = a ; 
	if ( b < small ) 
		small = b ;    
	
	for ( i = small ; i >= 1 ; i-- ) { 
		if ( (a % i == 0) && ( b % i == 0) ) {
			printf ( "Greatest Common Divisor is : %d", i ) ; 
			break ; // we don't need to function calculate anymore.
		}
		
	} // end for 
	return 0 ;
	 
} // end function gcd 

