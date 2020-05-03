/*
Author is : Ibrahim Halil GEZER
5.28 (Reversing Digits) Write a function that takes an integer value and returns the number with
its digits reversed. For example, given the number 7631, the function should return 1367.
*/

#include <stdio.h>

int reverse ( int a ) ;

int main ( void ) {
	int  number ;
	
	printf ( "Enter a number : " ) ;
	scanf ( "%d", &number ) ;
	
	reverse ( number ) ;
	
	return 0 ;
} // end function main 

int reverse ( int a ) {
	int rev = 0 ; 
	int number = a ;
	 
	while (number != 0 ) {
	    rev= (rev * 10) + (number % 10);
	    number /= 10;
	}
	printf ("Reverse is : %d ", rev );
	return 0 ; 	
	} // end function reverse 
	


