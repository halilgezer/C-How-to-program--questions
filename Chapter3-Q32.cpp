/*3.32 (Another Dangling Else Problem) Modify the following code to produce the output shown.
Use proper indentation techniques. You may not make any changes other than inserting braces. The
compiler ignores the indentation in a program. We eliminated the indentation from the following
code to make the problem more challenging. [Note: It’s possible that no modification is necessary.]
if ( y == 8 )
if ( x == 5 )
printf( "@@@@@\n" );
else
printf( "#####\n" );
printf( "$$$$$\n" );
printf( "&&&&&\n" );
*/

#include <stdio.h>
int main ()
{ int x =5 , y= 7 ;
if ( y == 8 )
if ( x == 5 )
printf( "@@@@@\n" );
else
printf( "#####\n" );
printf( "$$$$$\n" );
printf( "&&&&&\n" );
}
