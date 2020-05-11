/*
Author is : Ibrahim Halil GEZER
5.23 (Time in Seconds) Write a function that takes  the time as three integer arguments (for
hours, minutes, and seconds) and returns the number of seconds since the last time the clock “struck
12.” Use this function to calculate the amount of time in seconds between two times, both of which
are within one 12-hour cycle of the clock.
*/

#include <stdio.h> 

int secondssinceclock ( int a , int b , int c ) ;  // function prototype

int main ( void ) {
	int hours, minutes , seconds ;
	
	printf ( "Enter hours : " ) ; 
	scanf ( "%d" , &hours );
	
	if ( hours < 0 || hours > 23  ) {
		printf ( "The number which you entered is invalid for hours. \n" ) ;
		return 0 ;
	}
	
	printf ( "Enter minutes : " ) ; 
	scanf ( "%d" , &minutes );
	
	if ( minutes < 0 || minutes > 59  ) {
		printf ( "The number which you entered is invalid for minutes. \n" ) ;
		return 0 ;
	}
	
	printf ( "Enter seconds : " ) ; 
	scanf ( "%d" , &seconds );
	
	if ( seconds < 0 || seconds > 60  ) {
		printf ( "The number which you entered is invalid for seconds. \n" ) ;
		return 0 ;
	}
	
	int result ;
	result = secondssinceclock ( hours, minutes , seconds) ;
	printf ( "It has been %d seconds for 12 O' clock . \n", result );
	
} // end main 

int secondssinceclock ( int h , int m , int s ) { // hours minutes and secons
	if ( h > 12) 
		h -= 12 ;
	
	m += h * 60 ;
	
	s +=  m * 60 ;
	return s ;
	
}


