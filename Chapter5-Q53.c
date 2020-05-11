/*
Author is : Ibrahim Halil GEZER 
5.53 (Computer-Assisted Instruction: Difficulty Levels) Exercise 5.50 through Exercise 5.52 developed
a computer-assisted instruction program to help teach an elementary school student multiplication.
Modify the program to allow the user to enter a difficulty level. At a difficulty level of 1,
the program should use only single-digit numbers in the problems; at a difficulty level of 2, numbers
as large as two digits, and so on.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void multiple ( int a  ) ;
void randomTrue ( void ) ;
void randomfalse ( void ) ;
int percent ( int total , int tru ) ;

int main ( void ) {
	int i, j ;
	int student ;
	printf ( "How many student will study ? " ) ;
	scanf ( "%d" , &student ) ;
	for ( j=1 ; j <= student ; j++) {
	//	for (i = 1 ; i <= 2; i++) 
			multiple ( i );
	}
	return 0 ;
}

void multiple ( int a ) {
	srand ( time ( NULL ) ) ;
	int x , y ;
	int result ; 
	int  countTrue =0 , countFalse = 0 ;
	int i ; 
	int level ;

	printf ( "Enter your level (1 to 10 ) : " ) ;
	scanf ( "%d" ,&level );
	while ( level < 1 || level > 10 ) {
		printf ( "Invalid value entered. Please enter again" ) ;
		scanf ( "%d", level ) ;
	}
	
	for ( i = 1 ; i <= 3 ; i++ ) {
		x = 1 + rand ( ) % 10 * level ;
		y = 1 + rand ( ) % 10 * level ;
	
	
	printf ( "\nHow much is %d times %d ? ", x , y  ) ;
	scanf ( "%d", &result  ) ; 
	
	while ( result != x * y  )  {
		randomfalse ( ) ;
		countFalse ++;
		scanf ( "%d", &result ) ;
	}
		
	if ( result  == x * y ) {
		randomTrue ( ) ;
		countTrue++ ;
	}
	
	}
	int total  = countFalse + countTrue ;
	printf ( "Your average is %d percent.\n " , percent (total, countTrue) ) ;
	
	if ( percent (total, countTrue) < 75  )
		printf ( "Please ask your teacher for extra help.\n");
		
	else 
		printf ( "Congratulations, you are ready to go to the next level!\n" ) ;
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

int percent ( int total , int tru ) {
	return ( 100 * tru / total )  ;
}
