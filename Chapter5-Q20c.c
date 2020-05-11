/*
Author is : Ibrahim Halil GEZER
5.20 (Displaying a Square of Any Character)  Modify the function created in Exercise 5.19 to
form the square out of whatever character is contained in character parameter fillCharacter. Thus
if side is 5 and fillCharacter is “#” then this function should print:
#####
#####
#####
#####
#####

*/

#include <stdio.h>

int asteriks ( int x ) ; // function prototype
int side ;

int main ( void ) { 
	asteriks (side) ;
}
 
int asteriks ( int side ) {
	int i, j , chara;
	printf ( "Enter the size of square : " )  ;
	scanf ( "%d" , &side  );
	printf ( "Enter the character: " ) ;
	scanf ("%s", &chara) ;
	for (i = 1; i <= side; i++ ) {
		
		for (j = 1; j <= side; j++ )
		printf ("%c", chara);
		
		printf ( "\n" ) ;
	}
	return 0 ;
	
} // end functin asteriks
