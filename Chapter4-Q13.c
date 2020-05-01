/*
Author is : Ibrahim Halil GEZER
4.13 (Calculating the Product of Odd Integers) Write a program that calculates and prints the
product of the odd integers from 1 to 15.
*/
#include <stdio.h>

int main (void) 
{
	int i, sum ;
	
	for (i=1; i<=15; i+=2)
		sum+=i;
	printf ( "The sum of odd integers 1 to 15 is : %d",sum );
	return 0 ;
} // end function main
