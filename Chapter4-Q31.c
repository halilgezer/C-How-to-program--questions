/*
Author is : Ibrahim Halil GEZER
4.31 (Diamond Printing Program) Write a program that prints the following diamond shape.
You may use printf statements that print either a single asterisk (*) or a single blank. Maximize
your use of repetition (with nested for statements) and minimize the number of printf statements.
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>

int main (void)
{
	int space , i , j; 
	int number = 5 ;
	
	 /*  Top diamond */ 
	for (i=1; i<=number; i++) { // inner for begins
	
	for (space=number-i ; space>=1; space--)  // outer for begins
		printf (" ");
		
		for (j=1; j <= (2*i-1); j++) 
			printf ("*");
			 
		printf ("\n") ;
	} // // inner for ends
	// bottom diamond 
	for ( i = 1; i <= number; i++  ) {
		
		for (space=1; space <= i; space++ )
			printf ( " " );
	
		for (j =1 ; j<= (2*number-1)- 2*i ; j++ )  
			printf ("*") ;
		
		printf ("\n");
	}

	return 0 ;
} // end function main 









