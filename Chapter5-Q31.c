/*
Author is : Ibrahim Halil GEZER
5.31 (Coin Tossing) Write a program that simulates coin tossing. For each toss of the coin the
program should print Heads or Tails. Let the program toss the coin 100 times, and count the number
of times each side of the coin appears. Print the results. The program should call a separate function
flip that takes no arguments and returns 0 for tails and 1 for heads. [Note: If the program
realistically simulates the coin tossing, then each side of the coin should appear approximately half
the time for a total of approximately 50 heads and 50 tails.]
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void toss ( void ) ;

int main ( void ) {
	
	toss () ;
	
	return 0 ;
}
void toss ( void ) {
	int i ;
	int result ;
	int heads = 0 , tails = 0  ;
	srand (time ( NULL )) ;
	
	for ( i =1 ; i <= 100 ; i++ ) {
		result  = rand () % 2 ;
		
		if ( result == 0)  {
			printf ( "Tails\t" ) ;
			tails ++ ;
		}
		else {
			printf ( "Heads\t" ) ;
			heads ++ ;
		}
		if  ( i % 5 == 0 ) 
			printf ( "\n" ) ;
	}
	printf ( "\nNumber of heads are : %d \n", heads );
	printf ( "Number of tails are : %d \n", tails );	
	
}





