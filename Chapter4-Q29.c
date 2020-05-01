/*
Author is : Ibrahim Halil GEZER
4.29 (De Morgan’s Laws) In this chapter, we discussed the logical operators &&, ||, and !. De
Morgan’s Laws can sometimes make it more convenient for us to express a logical expression. These
laws state that the expression !(condition1 && condition2) is logically equivalent to the expression
(!condition1 || !condition2). Also, the expression !(condition1 || condition2) is logically equivalent
to the expression (!condition1 && !condition2). Use De Morgan’s Laws to write equivalent expressions
for each of the following, and then write a program to show that both the original expression
and the new expression in each case are equivalent.
a) !( x < 5 ) && !( y >= 7 )
b) !( a == b ) || !( g != 5 )
c) !( ( x <= 8 ) && ( y > 4 ) )
d) !( ( i > 4 ) || ( j <= 6 ) )
*/
#include <stdio.h>

int main ( void ) 
{
	int x =10, y = 5, a =6, b= 2 , i= 1, j = 9,g =15; // I give the numbers random
	printf ( "First one: original statements: \n" );
	printf (" =============================  \n") ;
	printf ( "%d\n", !( x < 5 ) && !( y >= 7 ) ) ;
	printf ("%d\n",!( a == b ) || !( g != 5 ) );
	printf ("%d\n", !( ( x <= 8 ) && ( y > 4 ) ));
	printf ("%d\n", !( ( i > 4 ) || ( j <= 6 ) ) ) ;
	
	printf (" =============================  \n") ;
	printf ( "Second one: control statements: \n" );
	printf ( "%d\n", ( x >=5 ) && ( y<7 ) )  ;
	printf ( "%d\n",( a!=b ) || ( g == 5) ) ;
	printf ( "%d\n", ( x > 8 ) || ( y <= 4 ) );
	printf ( "%d\n", (i <= 4 ) && ( j > 6) ) ;
	
	
	return 0 ;
	} // function main end
