/*
Author is : Ibrahim Halil GEZER
4.32 (Modified Diamond Printing Program) Modify the program you wrote in Exercise 4.31 to
read an odd number in the range 1 to 19 to specify the number of rows in the diamond. Your program
should then display a diamond of the appropriate size.
*/
#include<stdio.h>

int main (void)
{
	int space , i , j; 
	int number ;
	printf ( "Please enter a number for diamond rows (1 to 19 ) : " );
	scanf ("%d", &number );
	
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

