/*
Author is : Ibrahim Halil GEZER
5.51 (Computer-Assisted Instruction: Reducing Student Fatigue)  One problem in CAI environments
is student fatigue. This can be reduced by varying the computer’s responses to hold the student’s
attention. Modify the program of Exercise 5.50 so that various comments are displayed for
each answer as follows:
Possible responses to a correct answer:
Very good!
Excellent!
Nice work!
Keep up the good work!
Possible responses to an incorrect answer:
No. Please try again.
Wrong. Try once more.
Don't give up!
No. Keep trying.
Use random-number generation to choose a number from 1 to 4 that will be used to select
one of the four appropriate responses to each correct or incorrect answer. Use a switch statement to
issue the responses.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void multiple ( int a  ) ;
void randomTrue ( void ) ;
void randomfalse ( void ) ;

int main ( void ) {
	int i ;
	for (i = 1 ; i <= 10; i++) 
		multiple ( i );
	
	return 0 ;
}

void multiple ( int a ) {
	srand ( time ( NULL ) ) ;
	int x , y ;
	int result ; 
	x = 1+ rand ( ) % 10 ;
	y = 1+ rand ( ) % 10 ;
	printf ( "\nHow much is %d times %d ? ", x , y  ) ;
	scanf ( "%d", &result  ) ; 
	
	while ( result != x * y  )  {
		randomfalse ( ) ;
		scanf ( "%d", &result ) ;
	}
		
	if ( result  == x * y ) {
		randomTrue ( ) ;
	}
	
} // end function multiple

void randomTrue ( void ) {
	int x = 1 + rand () % 4 ;
	
	switch  ( x ) {
		
		case 1 :
			printf ( "Very good! \n" ) ;
			break ;
		case 2 :
			printf ( "Excellent! \n" ) ;
			break ;
		
		case 3 :
			printf ( "Nice work! \n" ) ;
			break ;
		
		case 4 : 
			printf ( "Keep up the good work! \n" ) ;
			break ;
	
	}
} // function true
void randomfalse ( void ) {
	int x = 1 + rand () % 4 ;
	
	switch ( x ) {
		
		case 1 :
			printf ( "No. Please try again : \n" ) ;
			break ;
		case 2 :
			printf ( "Wrong. Try once more : \n" ) ;
			break ;
		
		case 3 :
			printf ( "Don't give up! :  \n" ) ;
			break ;
		
		case 4 : 
			printf ( "No. Keep trying :  \n" ) ;
			break ;
	
	}
}









