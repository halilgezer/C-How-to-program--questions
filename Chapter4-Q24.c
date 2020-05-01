/*  
Author is : Ýbrahim Halil GEZER
4.24 Assume i = 1, j = 2, k = 3 and m = 2. What does each of the following statements print?

*/
#include <stdio.h>

int main (void)
{
int i = 1, j = 2 , k=3, m=2 ;
// all of these are boolean operator and it must be only 0 or 1 .
 printf( "%d\n", i == 1 );
 printf( "%d\n", j == 3 );
 printf( "%d\n", i >= 1 && j < 4 );
 printf( "%d\n", m <= 99 && k < m );
 printf( "%d\n", j >= i || k == m );
 printf( "%d\n", k + m < j || 3 - j >= k );
 printf( "%d\n", !m );
printf( "%d\n", !( j - m ) );
 printf( "%d\n", !( k > m ) );
 printf( "%d\n", !( j > k ) );
return 0 ; 
}

