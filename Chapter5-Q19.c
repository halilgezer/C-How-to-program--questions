/*
5.19 (Parking Charges) Write a function that  displays a solid square of asterisks whose side is
specified in integer parameter side. For example, if side is 4, the function displays:
****
****
****
****
*/

#include <stdio.h>

int asteriks ( int x ) ; // function prototype
int side ;

int main ( void ) { 
	asteriks (side) ;
}
 
int asteriks ( int side ) {
	int i, j ;
	printf ( "Enter the size of square : " )  ;
	scanf ( "%d" , &side  );
	for (i = 1; i <= side; i++ ) {
		
		for (j = 1; j <= side; j++ )
		printf ("*");
		
		printf ( "\n" ) ;
	}
	return 0 ;
	
} // end functin asteriks
