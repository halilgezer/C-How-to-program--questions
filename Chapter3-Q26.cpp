/*3.26 (Tabular Output) Write a program that utilizes looping to produce the following table of
values:
*/
#include <stdio.h>
int main ()
{ //function main begins execute
	int i = 1;
	printf ("A \t A+2 \t A+4 \t A+6 \n\n");
	for (i; i<=5; i++) {//for begins loop 10 times 
		printf ("%d \t %d \t %d \t %d\n",3*i,3*i+2,3*i+4,3*i+6);
	}// end for 
	return 0 ;
} // end of function main 

