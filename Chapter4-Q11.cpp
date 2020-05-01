/* 
Author is: Ibrahim Halil GEZER
4.11 (Find the Smallest) Write a program that finds the smallest of several integers. Assume that
the first value read specifies the number of values remaining
*/
#include <stdio.h>

int main (void )
{
	int  amount, smallest ,i,number  ; 
	
	printf ( "How many number you want to enter: "); // ask an integer 
	scanf ("%d",&amount ) ; // read it 
	printf ( "Enter 1. integer: " );
	scanf ( "%d",&number ) ;
	smallest = number ;
	
	for (i=2; i<=amount; i++) {
		printf ( "Enter %d. integer: ",i );
		scanf ( "%d",&number ) ;
		if ( number < smallest) 
			smallest = number ;
			
	} // end for 
	printf ( "The smallest number is : %-4d",smallest  );
	return 0 ;
}
