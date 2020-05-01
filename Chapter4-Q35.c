/* 
Author is : Ibrahim Halil GEZER
4.35 A criticism of the break statement and the continue statement is that each is unstructured.
Actually, break statements and continue statements can always be replaced by structured statements,
although doing so can be awkward. Describe in general how you would remove any break
statement from a loop in a program and replace that statement with some structured equivalent.
[Hint: The break statement leaves a loop from within the body of the loop. The other way to leave
is by failing the loop-continuation test. Consider using in the loop-continuation test a second test
that indicates “early exit because of a ‘break’ condition.”] Use the technique you developed here to
remove the break statement from the program of Fig. 4.11.
,
*/
/* Fig. 4.11: fig04_11.c
2 Using the break statement in a for statement */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
 	int x; /* counter */

 	/* loop 10 times */
 	for ( x = 1; x <= 10; x++ ) {

 		/* if x is 5, terminate loop */
 	if ( x == 5 ) {
		return 0 ; // I change break statement to return statement !!
	} /* end if */
	printf( "%d ", x ); /* display value of x */
	} /*end for */

 	printf( "\nBroke out of loop at x == %d\n", x );
 	
 	return 0; /* indicate program ended successfully */
} /* end function main */
