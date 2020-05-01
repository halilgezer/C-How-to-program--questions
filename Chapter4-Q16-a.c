/*
Author is : Ibrahim Halil GEZER
4.16 (Triangle Printing Program) Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a
single printf statement of the form printf( "*" ); (this causes the asterisks to print side by side).
[Hint: The last two patterns require that each line begin with an appropriate number of blanks.]

(A)    (B) 		(C) 	(D)
* ********** ********** *
** ********* ********* **
*** ******** ******** ***
**** ******* ******* ****
***** ****** ****** *****
****** ***** ***** ******
******* **** **** *******
******** *** *** ********
********* ** ** *********
********** * * **********

*/
#include <stdio.h>

int main (void)
{
	int j,i,number ;
	number = 10 ;
	
	for (i=1 ; i<=number; i++) { // colomn number
		
		for (j=1; j<=i; j++) {
			printf ("*");
	} // end inner for
		
		printf ("\n");
	} // end outer for 
	return 0 ;
} //end funciton main 
