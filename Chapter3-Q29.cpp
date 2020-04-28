/*3.29 What does the following program print?

*/
#include <stdio.h>
 int main( void )
 {
 int count = 1; /* initialize count */

 while ( count <= 10 ) { /* loop 10 times */

 /* output line of text */
 printf( "%s\n", count % 2 ? "****" : "++++++++" );
 count++; /* increment count */
 } /* end while */

 return 0; /* indicate program ended successfully */
 } /* end function main */
