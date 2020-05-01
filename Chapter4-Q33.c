/*
Author is : Ibrahim Halil GEZER
4.33 (Roman Numeral Equivalent of Decimal Values) Write a program that prints a table of all
the Roman numeral equivalents of the decimal numbers in the range 1 to 100.
*/

#include <stdio.h>

int main ( void )
{
	int amount, now,  number ;
	
	for (number = 1; number <= 100 ; number++ ) { // for begins 
		now = number ;
		
		if (number == 100)  {
			printf (" C " );
			now = 0;
		}
		if (now >= 50 )  {
			printf ("L");
			now -= 50 ;
		}
		while ( now >= 10)  {
			printf ("X");
			now -=10 ;
		}
		if ( now >= 5)	{  // outer if begins
			
			if (now %10 ==9) { // inner if begins 
				printf ( "IX" );
				now -=9 ;
			} // end inner if 
			else  {
				printf ("V");
				now -= 5 ;
			}		
			
		} // outer if ends
		
		while (now >=1 ) {
			if (now %10 == 4) {
				printf ("IV");
				now -=4;
			}
			else {
				printf ("I");
				now -=1 ;
			}
		}
		printf ("\n");
	}
	
	return 0 ;
} // end function main 







