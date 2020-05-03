/*
Author is : Ibrahim Halil GEZER
5.16 (Exponentiation) Write a function integerPower(base, exponent) that returns the value of
base** (exponent)
For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero
integer, and base is an integer. Function integerPower should use for to control the calculation.
Do not use any math library functions.
*/

#include <stdio.h>

int integerPower ( int base , unsigned int  exponent ) ; 
 /// that is unsigned int because we want to pozitive integer 
int main  ( void ) 
{ // function main begins execute
	int base ;
	unsigned int  exponent ;
	integerPower ( base, exponent ) ;
} // end functioon main 

int integerPower ( int base , unsigned int  exponent) {
	
	printf ( "Enter the base : " ) ;
	scanf ( "%d", &base ) ;
	printf ( "Enter the exponent: " ) ;
	scanf ( "%u", &exponent ) ;
	int i  ;
	int result = 1 ;
	for (i = 1 ; i <= exponent ; i++ ) {
		result *=base ;	
	}
	printf ( "%d ** %u is : %d ", base , exponent , result   );
	
	int again ;
	printf ( "\n\nIf you want calculate again write 1 : " ) ;
	scanf ( "%d",  &again ) ;
	if ( again == 1 ) 
		integerPower ( base, exponent ) ;
	else 
		return 0 ;
	
}
