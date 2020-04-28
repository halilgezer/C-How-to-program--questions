/* 3.40 (Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard
pattern:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/
#include <stdio.h>
int main ()
{
	int i ,j  ;
	int number = 15 ;
	for (i=1; i<=number; i++ ) {
		for (j=1; j<=number; j++) {
			if ((i +j) %2 ==0 )
				printf ("*") ;
			else 
				printf (" ");
		}
	printf ("\n");
	}
}
