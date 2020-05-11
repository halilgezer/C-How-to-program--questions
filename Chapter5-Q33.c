/*
Author is : Ibrahim Halil GEZER
5.33 (Guess the Number Modification) Modify the program of Exercise 5.32 to count the number
of guesses the player makes. If the number is 10 or fewer, print Either you know the secret or
you got lucky! If the player guesses the number in 10 tries, then print Ahah! You know the secret!
If the player makes more than 10 guesses, then print You should be able to do better! Why should
it take no more than 10 guesses? Well, with each “good guess” the player should be able to eliminate
half of the numbers. Now show why any number 1 to 1000 can be guessed in 10 or fewer tries.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numberguess  ( void ) ;

int main ( void ) {
	
	numberguess () ;
	
	return 0 ;
}

void numberguess  ( void ) {
	srand ( time ( NULL ) ) ;
	int number = 1 + rand () % 10  ; 
	int guess  ;
	char again ; 
	int count = 0 ;
	
	printf ( "I have a number between 1 and 1000. \n" ) ;
	printf ( "Can you guess my number? \n" ) ;
	printf ( "Please type your first guess. \n" ) ;
	scanf ( "%d", &guess) ;
	
	while ( guess != number  )  {
		if ( guess > number )  {
			printf ( "Too high. Try again. \n" ) ;
			scanf ( "%d", &guess ) ;
			count ++ ;
		}
			
		else if ( guess < number ) {
			printf ( "Too low. Try again. \n" ) ;
			scanf ( "%d", &guess ) ;
			count ++ ;
		}
			
	}
	printf ( "Excellent! You guessed the number! \n\n" ); 
		
	count++ ;
	if ( count < 10) 
		printf ( "Either you know the secret or you got lucky! \n" ) ;
	else if ( count = 10 ) 
		printf ( "Ahah! You know the secret!\n" ) ;
	else 
		printf ( "You should be able to do better! \n") ;
	
	
	printf ( "\nWould you like to play again (y or n)? ") ;
	scanf ("%s", &again) ; 
	
	if (again == 'y' ||  again == 'Y' )  {
		printf ("\n");
		numberguess () ;
		}

}

