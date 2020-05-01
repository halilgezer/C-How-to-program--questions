/*
Author is : Ibrahim Halil GEZER
4.14 (Factorials) The factorial function is used frequently in probability problems. The factorial
of a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive
integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5.
Print the results in tabular format. What difficulty might prevent you from calculating the factorial
of 20?
*/
#include <stdio.h>

int main (void)
{
	int facto, i ; //defind terms
	
	facto = 1 ; //initialize 1 to facto
	printf ("%5s  %20s","number", "factorial\n");
	
	for (i=1; i<=5; i++ ) {
		facto *=i; 
		printf ( "%d!\t is %15d\n", i, facto  );
	} // end if  
	
	return 0 ;
} // end function main 
