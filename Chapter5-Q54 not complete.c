/* 
Author is : Ibrahim Halil GEZER
5.54 (Computer-Assisted Instruction: Varying the Types of Problems) Modify the program of
Exercise 5.53 to allow the user to pick a type of arithmetic problem to study. An option of 1 means
addition problems only, 2 means subtraction problems only, 3 means multiplication problems only
and 4 means a random mixture of all these types.
*/ 

/* In the end I miscorrect all of the functions. I will check later. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void process ( int a  ) ;
void randomTrue ( void ) ;
void randomfalse ( void ) ;
int percent ( int total , int tru ) ;
int arithmetic ( int x , int y )  ;

char arithmeticType ; 

int main ( void ) {
	int i, j ;
	int student ;
	printf ( "How many student will study ? " ) ;
	scanf ( "%d" , &student ) ;
	for ( j=1 ; j <= 1 ; j++) {
			process ( j );
	}
	return 0 ;
}

void process ( int a ) {
	srand ( time ( NULL ) ) ;
	int x , y ;
	int result ; 
	int  countTrue =0 , countFalse = 0 ;
	int i ; 
	int level ;

	printf ( "Enter your level (1 to 10 ) : " ) ;
	scanf ( "%d" ,&level ) ; 
	
	printf ( "Enter a arithtmetic type. You want to study \n" ) ;
	printf ( "Addition problems only             : 1 \n" ) ;
	printf ( "Subtraction problems only          : 2 \n" ) ;
	printf ( "Multiplication problems only       : 3 \n" ) ;
	printf ( "Random mixture of all these types. : 4 \n" ) ;
	
	
	for ( i = 1 ; i <= 2 ; i++ ) {
		x = 1 + rand ( ) % 10 * level ;
		y = 1 + rand ( ) % 10 * level ;
 	//	arithmetic (  x ,  y ) ;
	
	printf ( "\nHow much is %d %c %d ? ", x , arithmmetictype() , y  ) ;
	scanf ( "%d", &result  ) ; 
	
	while ( result != arithmetic ( x , y )  )   {
		randomfalse ( ) ;
		countFalse ++;
		scanf ( "%d", &result ) ;
	}
		
	if ( result  ==  arithmetic ( x , y )  ) {
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

int arithmetic ( int x , int y ) {

	int type ; 
	scanf ( "%d" , &type ) ;
		if ( type == 1 ) {
		printf ("+");
	//	arithmeticType = '+' ;
	}
		
	else if ( type == 2 ) {
		return x - y ;
	//	arithmeticType = '-' ;
	}
		
	else if ( type == 3 ) {
		return x * y ;
	//	arithmeticType = '*' ;
	}
		
	else if ( type == 4 ) {
		int x = 1 + rand ( ) % 3 ;
		
		switch (x) {
			case 1 :
				return  ( x + y ) ;
			//	arithmeticType = '+' ;
				break ;
			
			case 2 : 
				return ( x - y ) ;
			//	arithmeticType = '-' ;
				break ;
			
			case 3 : 
				return ( x * y ) ;
			//	arithmeticType = '*' ;
				break; 
			
			default :
				break ;
		}  // end switch case
	} // end else if 

	
	





