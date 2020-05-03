/*
Author is : Ibrahim Halil GEZER
5.11 (Rounding Numbers) Function floor may be used to round a number to a specific decimal
place. The statement
y = floor( x * 10 + .5 ) / 10;
rounds x to the tenths position (the first position to the right of the decimal point). The statement
y = floor( x * 100 + .5 ) / 100;
rounds x to the hundredths position (the second position to the right of the decimal point). Write
a program that defines four functions to round a number x in various ways
a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundreths( number )
d) roundToThousandths( number )
For each value read, your program should print the original value, the number rounded to the
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth,
and the number rounded to the nearest thousandth.

*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int roundToInteger ( float a ) ; // function prototype
float roundToTenths ( float a ) ; // function prototype
float roundToHundreths ( float a ) ; // function prototype
float roundToThousandths ( float a ) ;  // function prototype

int main ( void ) // function main begins execute
{ 
  float number ;

  while ( 1 ) { // Always return to the user enter -1 
  		printf ( "Enter a floating number you want to round it : \n" ); 
  		printf ( "Enter -1 to end.. \n" );
  		scanf ( "%f", &number ) ; 
  		  
  		if ( number == -1 )  // ýf number is -1 
  			return 0 ; // end to application
	
	  	else { 
	 	  	printf ( "\nOriginal number is: %2.5f rounded to Integer     : %-3d \n", number, roundToInteger ( number )  ) ;
	 	  	printf ( "\nOriginal number is: %2.5f rounded to Tenths      : %-3.1f \n", number, roundToTenths ( number )  ) ;
	 	  	printf ( "\nOriginal number is: %2.5f rounded to Hundreths   : %-3.2f \n", number, roundToHundreths ( number )  ) ;
	 	  	printf ( "\nOriginal number is: %2.5f rounded to Thousandths : %-3.3f \n\n", number, roundToThousandths ( number )  ) ;
	  	  	
			 }
  } // while ends
	
	return 0 ;
} // end of function main 
	
int roundToInteger ( float a )  {
	return  floor (a + 0.5 ) ;
}
	
float roundToTenths ( float a ) {
	return ( floor ( a*10 + 0.5 ) ) / 10 ; 
}

float roundToHundreths ( float a ) {
	return ( floor ( a*100 + 0.5 ) ) / 100 ; 
}
		
float roundToThousandths ( float a ) {
	return ( floor ( a*100 + 0.5 ) ) / 100 ; 
}



