/*
Author is : Ibrahim Halil GEZER
5.14 For each of the following sets of integers, write a single statement that will print a number
at random from the set.
a) 2, 4, 6, 8, 10.
b) 3, 5, 7, 9, 11.
c) 6, 10, 14, 18, 22.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{	int i ;
	srand ( time ( NULL ) ) ;
	for (i=1; i<=5; i++ ) {
		
    printf ( "a = %d\n", (1 + rand () % 5) *2 ) ;
	printf ( "b = %d\n", (rand () % 5) *2  + 3 ) ;
	printf ( "c = %d\n", ((rand () % 5) *2  + 3 )  *2 );
	
	}
    return 0;
}
