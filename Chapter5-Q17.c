/*
Author is : Ibrahim Halil GEZER
5.17 (Multiples) Write a function multiple that determines for a pair of integers whether the second
integer is a multiple of the first. The function should take two integer arguments and return 1
(true) if the second is a multiple of the first, and 0 (false) otherwise. Use this function in a program
that inputs a series of pairs of integers.
*/

#include <stdio.h>

int multiple  ( int a , int b) ; // function prototype

int main ( void ) 
{ // function main begins execute 
	int a , b ; 
	multiple ( a, b ) ;
	return 0 ;
} // end function main 

int multiple  ( int a , int b) { 
	
	printf ( "Enter the first integer:  " );
	scanf ("%d", &a) ;
	printf ( "Enter the second integer: " );
	scanf ( "%d", &b ) ;
	if ( b % a == 0) 
		printf ("%d is a multiple of %d . ", b , a ) ;
	
	else 
		printf ("%d is NOT a multiple of %d . ", b , a ) ;
		
	return 0 ;
} // end function multiple


