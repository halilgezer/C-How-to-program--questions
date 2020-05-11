/*
Author is : Ibrahim Halil GEZER
5.32 (Guess the Number) Write a C program that plays the game of “guess the number” as follows:
Your program chooses the number to be guessed by selecting an integer at random in the range
1 to 1000. The program then types:

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.

The player then types a first guess. The program responds with one of the following:

1. Excellent! You guessed the number!
Would you like to play again (y or n)?
2. Too low. Try again.
3. Too high. Try again.

If the player’s guess is incorrect, your program should loop until the player finally gets the number
right. Your program should keep telling the player Too high or Too low to help the player “zero in”
on the correct answer. [Note: The searching technique employed in this problem is called binary
search. We’ll say more about this in the next problem.]
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
	int number = 1 + rand () % 100  ; 
	int guess  ;
	char again ; 
	
	printf ( "I have a number between 1 and 1000. \n" ) ;
	printf ( "Can you guess my number? \n" ) ;
	printf ( "Please type your first guess. \n" ) ;
	scanf ( "%d", &guess) ;
	
	while ( guess != number  )  {
		if ( guess > number )  {
			printf ( "Too high. Try again. \n" ) ;
			scanf ( "%d", &guess ) ;
		}
			
		else if ( guess < number ) {
			printf ( "Too low. Try again. \n" ) ;
			scanf ( "%d", &guess ) ;
		}
			
	}
	printf ( "Excellent! You guessed the number! \n" ); 
	
	printf ( "Would you like to play again (y or n)? ") ;
	scanf ("%s", &again) ; 
	
	if (again == 'y' || again == 'yes' || again == 'Yes' || again == 'YES' )  {
		printf ("\n");
		numberguess () ;
		}

}





