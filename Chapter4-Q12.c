/*
Author is : Ibrahim Halil GEZER
4.12 (Calculating the Sum of Even Integers) Write a program that calculates and prints the sum
of the even integers from 2 to 30.
*/
#include <stdio.h>

int main ()
{
	int i, total ; 
	
	total = 0 ; // initialize total 
	
	for (i=2; i<=30; i+=2)
		total +=i ;
	printf ( "The sum of even numbers 2 to 30 is is : %d", total );
}
