/*
Author is : Ibrahim Halil GEZER
5.22 (Separating Digits) Write  program segments that accomplish each of the following:
a) Calculate the integer part of the quotient when integer a is divided by integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in a) and b) to write a function that inputs an integer
between 1 and 32767 and prints it as a series of digits,with two spaces between each digit.
For example, the integer 4562 should be printed as:

4 	5	 6	  2

*/

#include <stdio.h>

void digitSeparate ( int a ) ; // function prototype
int intQuotient ( int a , int b ) ; // function prototype
int intRemainder ( int a , int b ) ; // function prototype

int main ( void ) {
	
	int num1 ;
	printf ( "Enter an integer between 1 to 32767 : ") ;
	scanf ( "%d" , &num1) ;
	if ( num1 < 1 || num1 > 32767 ) {
		printf ( "Number is not between 1 to 32767.  \n" );
		return 0 ;
	}
	digitSeparate ( num1 ) ;
	return 0 ; 
} // end function main 

void digitSeparate ( int a )  {
	int result  = 0;
	
	if ( a >= 10000 )   {
	result = intQuotient ( a , 10000 ) ;
		printf ( "%d  ", result ) ;
		a -= 10000 * result ; 
	}
	
	if ( a >= 1000) {
		result = intQuotient ( a , 1000 ) ;
		printf ("%d   ", result) ;
		a -= 1000 * result ;
	}
	
	if ( a >= 100 ) {
		result = intQuotient ( a , 100 ) ;
		printf ("%d   ", result) ;
		a -= 100 * result ;
	}

	if (a >= 10 ) {
		result = intQuotient ( a , 10 ) ;
		printf ("%d   ", result) ;
		a -= 10 * result ;
	} 
	result =( a % 10  ) ;
	printf ("%d   ", result);
	
} // end function separate

int intQuotient ( int a , int b )  {
	return a / b ;
}
int intRemainder ( int a , int b )  {
	return a % b ;
}





