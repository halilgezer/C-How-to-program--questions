/*
author is : ibrahim Halil GEZER

4.9 (Sum a Sequence of Integers) Write a program that sums a sequence of integers. Assume that
the first integer read with scanf specifies the number of values remaining to be entered. Your program
should read only one value each time scanf is executed. A typical input sequence might be
5 100 200 300 400 500
where the 5 indicates that the subsequent five values are to be summed.
*/
#include <stdio.h>

int main (void)
{
	int number, counter, total, i ;
	total = 0 ; // initialize total
	
	printf ( "How many number you want to enter : " );
	scanf ( "%d", &counter) ;
	
	for (i=1 ; i <= counter; i++) {
		printf ( "Enter a number : " );
		scanf ( "%d", &number) ;
		total +=number ;		
	} // end if 
	printf ("total is: %d", total);
	
	return 0 ;
} // end function main

