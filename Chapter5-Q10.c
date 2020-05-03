/*
Author is : Ibrahim Halil GEZER
5.10 (Rounding Numbers) An application of function floor is rounding a value to the nearest
integer. The statement
y = floor( x + .5 );
will round the number x to the nearest integer and assign the result to y. Write a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the rounded number.
*/

// I solve with using a function but you can solve it easily without any function. 
#include <stdio.h>
#include <math.h>

int nearint ( float a) ; // function prototype 

int main ( void ) // function main begins execute
{ 
  float number ;

  while ( 1 ) { // while begins 
  		printf ( "Enter a floating number you want to round it : \n" );
  		printf ( "Enter -1 to end.. \n" );
  		scanf ( "%f", &number ) ;
  		  
  		if ( number == -1 ) 
  			return 0 ;
	
	  	else {
	 	  	printf ( "\nFloating number is: %2.2f  to rounded: %3d. \n\n", number, nearint ( number ) ) ;
	  	  	
			 }
  } // while ends
	
	return 0 ;
} // end of function main 

int nearint ( float a) //defind function 
{	return  floor (a + 0.5 ) ;
}





	
