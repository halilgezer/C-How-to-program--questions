/*3.36 (Printing the Decimal Equivalent of a Binary Number) Input an integer containing only
0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint: Use the remainder and
division operators to pick off the “binary” number’s digits one at a time from right to left. Just as in
the decimal number system, in which the rightmost digit has a positional value of 1, and the next
digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number system
the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4,
then 8, and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100.
The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]
*/

	//Algorithm
/* ýf we take a number and number % 10  is gave us 1s order 
number = number/10 and same procec gave us 10s order

*/
#include <stdio.h>
int main ()
{ // function main begins execute
	int number ; // the number user will give
	int i = 1 ; //  for binary value
	int decimal=0  ; 
	printf ("Give me a binary number (only 1 and 0)\n") ;
	printf ("And I will turn it to decimal number: ") ;
	scanf ( "%d",&number );
	while (number !=0  ) { //while begins
		decimal += (number %10) *i ;
		number /=10 ;
		i*= 2 ; // 
	}// end while
	printf ("The number equal to %i",decimal ) ;
	return 0 ;
} // function main ends
