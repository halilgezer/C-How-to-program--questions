/*
Author is : Ibrahim Halil GEZER
5.52 (Computer-Assisted Instruction: Monitoring Student Performance) More sophisticated
computer-assisted instruction systems monitor the student’s performance over a period of time. The
decision to begin a new topic is often based on the student’s success with previous topics. Modify
the program of Exercise 5.51 to count the number of correct and incorrect responses typed by the
student. After the student types 10 answers, your program should calculate the percentage that are
correct. If the percentage is lower than 75%, display "Please ask your teacher for extra help.",
then reset the program so another student can try it. If the percentage is 75% or higher, display
"Congratulations, you are ready to go to the next level!", then reset the program so another
student can try it.
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

	
	for ( i = 1 ; i <= 3 ; i++ ) {
	
	x = 1+ rand ( ) % 10 ;
	y = 1+ rand ( ) % 10 ;
	
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

