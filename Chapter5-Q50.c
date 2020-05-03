/*
Author is : Ibrahim Halil GEZER
5.50 (Computer-Assisted Instruction) The use of computers in education is referred to as computer-
assisted instruction (CAI). Write a program that will help an elementary school student learn
multiplication. Use the rand function to produce two positive one-digit integers. The program
should then prompt the user with a question, such as
How much is 6 times 7?
The student then inputs the answer. Next, the program checks the student’s answer. If it’s correct,
display the message "Very good!" and ask another multiplication question. If the answer is wrong,
display the message "No. Please try again." and let the student try the same question repeatedly
until the student finally gets it right. A separate function should be used to generate each new question.
This function should be called once when the application begins execution and each time the
user answers the question correctly.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void multiple ( int a  ) ;


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
		printf ( "\nNo please try again : "  ) ;
		scanf ( "%d", &result ) ;
	}
		
	if ( result  == x * y ) {
		printf ("\nVery Good ! \n") ;
	}
	
}
