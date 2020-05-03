/*
Author is : Ibrahim Halil GEZER
5.18 (Even or Odd) Write a program that inputs a series of integers and passes them one at a time
to function even, which uses the remainder operator to determine if an integer is even. The function
should take an integer argument and return 1 if the integer is even and 0 otherwise.
*/

#include <stdio.h>

int even ( int a ) ;

int main ( void ) { // function main begins execute
	int a ;
	printf ( "Enter a number : " ) ;
	scanf ("%d", &a);
	if (even (a) ) 
		printf ("This number is ODD. \n") ;
	else
		printf ( "This number is EVEN. \n");
		
	return 0 ;
} //end main 

int even ( int a ) {
	return  ( a % 2 ) ; 
}

