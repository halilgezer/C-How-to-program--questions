/*
Author is : Ibrahim Halil GEZER 
5.30 Write a function qualityPoints that inputs a student’s average and returns 4 if a student's
average is 90–100, 3 if the average is 80–89, 2 if the average is 70–79, 1 if the average is 60–69, and
0 if the average is lower than 60.
*/

#include <stdio.h>

int qualityPoints ( int a ) ;

int main ( void ) {
	int grade ;
	
	printf ( "Enter the average of students :  " ) ;
	scanf ( "%d" , &grade ) ;
	
	qualityPoints ( grade ) ;
	return 0 ;
} // end main 

int qualityPoints ( int a )  {
	if ( a >= 90 && a <= 100 ) 
		printf ("4") ; 
	else if ( a >= 80 ) 
		printf ("3") ;
	else if  ( a >= 70 ) 
		printf ("2") ;
	else if ( a >= 60 ) 
		printf ("1") ;
	else 
		printf ("0") ;
		
	return 0 ;
}
