/*
5.40 (Recursive main) Can main be called recursively? Write a program containing a function
main. Include static local variable count initialized to 1. Postincrement and print the value of count
each time main is called. Run your program. What happens?
*/
///////////////* I dont understand the question */ ///////////

#include <stdio.h>

int main (  void ) {
	static	int i  = 1 ; 
	int count = 0 ;
	for ( i ; i <= 2 ; i++  ){
		printf ("%d ", i ) ;
	}
	
	main () ;
	return 0 ;

}
