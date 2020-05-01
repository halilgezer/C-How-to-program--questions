/*
Author is : Ibrahim Halil GEZER
4.15 (Modified Compound Interest Program) Modify the compound-interest program of
Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop
to vary the interest rate.
*/
#include <stdio.h>
#include <math.h>

int main ( void )
{
	double amount, principal ;
	int year , rate; // rate is int because we use it in the for loop
	principal = 1000 ;
	
	for (rate=5; rate<=10; rate++) {
		printf ( "====== %d percentage ======\n", rate );
	printf( "%4s%21s\n", "Year", "Amount on deposit" );
	
	for ( year = 1; year <= 10; year++ ) {
		amount = principal * pow( 1.0 + (rate*0.01) , year ); // we must turn rate to float
		printf( "%4d%21.2f\n", year, amount );
			}  // end inner for 

	} // end outer for
	return 0 ;
} // end function main 

