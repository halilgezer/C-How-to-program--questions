/*3.25 (Tabular Output) Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.
*/
#include <stdio.h>
int main ()
{ //function main begins execute
	int i = 1;
	printf ("N \t10*N\t100*N\t1000*N\n\n");
	for (i; i<=10; i++) {//for begins loop 10 times 
		printf ("%d\t%d\t%d\t%d\n",i,10*i,100*i,1000*i);
	}// end for 
	return 0 ;
} // end of function main 

