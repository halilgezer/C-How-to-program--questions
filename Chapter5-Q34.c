/*
Author is : Ibrahim Halil GEZER
5.34 (Recursive Exponentiation) Write a recursive function power( base, exponent ) that when
invoked returns 
base** exponent
For example, power( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal
to 1. Hint: The recursion step would use the relationship 
base** exponent = base * base ** exponent–1
and the terminating condition occurs when exponent is equal to 1 because
base** 1 = base 

*/
#include <stdio.h>

int exponent ( int a, int b ) ;

int main ( void ) {
	int base , expo ;
	
	printf ( "Enter the  base number     : " )  ; 
	scanf ( "%d", &base ) ;
	printf ( "Enter the  exponent number : " )  ; 
	scanf ( "%d", &expo ) ; 
	printf ( "%d ** %d is : %d \n",base , expo , exponent ( base , expo ) ) ;
	
	
	
	return  0 ;	
}

int exponent ( int a, int b )  {
	int result = 1 ;
	
	while ( b >= 1 ) {
		result *= a ;
		b-- ; 
	} 
	
	return result ; 
		
	
}

