/* 
Author is : Ibrahim Halil GEZER
4.18 (Bar Chart Printing Program) One interesting application of computers is drawing graphs
and bar charts (sometimes called “histograms”). Write a program that reads five numbers (each between
1 and 30). For each number read, your program should print a line containing that number
of adjacent asterisks. For example, if your program reads the number seven, it should print *******.
*/

#include <stdio.h>

int main (void)
{
	int a,b,c,d,e ,j ;
	
	printf ( "Enter a number between 1 to 30 : ");
	scanf ( "%d%d%d%d%d", &a,&b,&c,&d,&e );
	
	for (j=1; j<=a; j++) 
			printf ("*");
		
	printf ("\n");
	
	for (j=1; j<=b; j++) 
			printf ("*");
		
	printf ("\n");
	
	for (j=1; j<=c; j++) 
			printf ("*");
		
	printf ("\n");
	
	for (j=1; j<=d; j++) 
			printf ("*");
		
	printf ("\n");
	
	for (j=1; j<=e; j++) 
			printf ("*");
		
	printf ("\n");
	
	return 0 ; 
} // end function main 
