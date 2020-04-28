/*3.22 (Predecrementing vs. Postdecrementing) Write a program that demonstrates the difference
between predecrementing and postdecrementing using the decrement operator --.
*/

#include <stdio.h>
int main ()
{ 
	int number1 =10 , number2= 10 ;
	
	printf ( "number1 is 10 \n") ;
	printf ( "number2 is 10 \n");
	for ( int i =1; i<=5; i++) {
	printf ("Here is postdecrementing number1-- : %d\n", number1--);
}
	for ( int i =1; i<=5; i++) {
		printf ("Here is predecrementing --number2 : %d\n", --number2);
}
	return 0 ;
}
