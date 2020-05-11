/*
Author is : Ibrahim Halil GEZER
5.27 (Prime Numbers) An integer  is said to be prime if it’s divisible by only 1 and itself. For example,
2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
a) Write a function that determines if a number is prime.
b) Use this function in a program that determines and prints all the prime numbers between
1 and 10,000. How many of these 10,000 numbers do you really have to test before
being sure that you have found all the primes?
c) Initially you might think that n/2 is the upper limit for which you must test to see if a
number is prime, but you need go only as high as the square root of n. Why? Rewrite
the program, and run it both ways. Estimate the performance improvement.
*/

#include <stdio.h>
int main ( void ) {
	int num ;
	
	for ( num = 2 ; num <= 10000 ; num++)
		prime ( num ) ;
		
	return 0 ;
} // function main end

int prime ( int a ) {
	int i ;
	int prime = 1 ; // flag
	int root = sqrt ( a );
	
	for (i = 2 ; i <= root ; i++ ) {
		
		if ( a % i == 0) 
			prime = 0 ;
		
	 }
		 if ( prime == 1 )
			printf ( "%-4d  is a prime number.. \n", a );

	return 0 ; 
	
}  // end function prime 

