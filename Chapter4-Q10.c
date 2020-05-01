/* 
Author is : Ibrahim Halil Gezer
4.10 (Average a Sequence of Integers) Write a program that calculates and prints the average of
several integers. Assume the last value read with scanf is the sentinel 9999. A typical input sequence
might be
10 8 11 7 9 9999
indicating that the average of all the values preceding 9999 is to be calculated.
*/
#include <stdio.h>
#include <stdbool.h>

int main (void)
{	
	int number ,total, count ;
	float average ; 	
	total = 0 ; // initialize to total
	
	while ( true )  { //always return 
		printf ( "Enter an integer: (9999 to end )"); // ask an integer
		scanf ("%d", &number); // read it 
		if (number == 9999)  // ýf ýt is EOF 
			break ; // break the loop
			 
			total += number ; // or  calculate total
			count ++ ; // increment count 
			average = (float) total / count ; // calculate average 
	} // end while
	printf ( "Total is: %d\n",total); 
	printf ( "Average is : %.2f", average );
	
	return 0 ;
} // end function main 
