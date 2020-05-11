/*
Author is : Ibrahim Halil GEZER
5.25 (Find the Minimum) Write a function that returns the smallest of three floating-point
numbers.
*/

float smallest ( float a, float b, float c ) ;

int main ( void ) {
	
	float num1, num2, num3 ;
	
	printf ("Enter  1. float number : ") ; 
	scanf ( "%f" , &num1  ) ;
	printf ( "Enter 2. float number : " ) ;
	scanf ( "%f" , &num2  ) ;
	printf ( "Enter 3. float number : " ) ;
	scanf ( "%f" , &num3  ) ;
	
	printf ( "The smallest number is : %.2f  ",  smallest ( num1, num2, num3)  ) ;
	
	return 0 ;
} 

float smallest ( float a, float b, float c ) { 
	float smal = a ;
	if ( b < smal ) 
		smal = b ;
	
	if (c < smal ) 
		smal = c ;
		
	return smal ;
}

