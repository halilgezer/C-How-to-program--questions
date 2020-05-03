/*
Author is : Ibrahim Halil GEZER
5.38 (Visualizing Recursion) It’s interesting to watch recursion “in action.” Modify the factorial
function of Fig. 5.14 to print its local variable and recursive call parameter. For each recursive call,
display the outputs on a separate line and add a level of indentation. Do your utmost to make the
outputs clear, interesting and meaningful. Your goal here is to design and implement an output format
that helps a person understand recursion better. You may want to add such display capabilities
to the many other recursion examples and exercises throughout the text.
*/

#include <stdio.h>

long factorial ( long number ) ;

int main ( void ) {
	int i , j  ; 
	
	for ( i = 0 ; i <= 10; i++) {
		j = i ;
		while ( j >= 2) {
			printf ( "%d * %d! --> ", j, j-1);
			j-- ;
	
			}
		printf ( "%d!  = %ld \n", i , factorial ( i ) ) ;
	}
		
	return 0 ;
} // end main 

long factorial ( long number ) {
	if ( number <= 1 ) {
		return 1 ;
	} 
	else  {
		return (number * factorial  ( number - 1 ) ) ;
		
	} // end else 
}
