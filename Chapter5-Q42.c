 /*
 5.42 What does the following program do?
 */
 
 
 #include <stdio.h>

 /* function main begins program execution */
 int main( void )
 {
 int c; /* variable to hold character input by user */

 if ( ( c = getchar() ) != EOF ) {
 main();
 printf( "%c", c );
 } /* end if */

 return 0; /* indicates successful termination */
 } 
