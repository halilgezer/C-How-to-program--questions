/* 2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different
integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest
of these numbers. Use only the single-selection form of the if statement you learned in this chapter.
The screen dialogue should appear as follows: */

#include <stdio.h>
int main ()
// beginning of the main function
{
	int num1, num2, num3 ;
	printf( "Enter three different integers :\n" ); // input three integers
	scanf( "%d%d%d", &num1 , &num2 , &num3 );		// read these integers.
	// printf("%d%d%d",num1 , num2 , num3);
	int sum , average, product ;
	printf( "Sum is %d \n",sum = num1 + num2 + num3 );
	printf( "Average is %d \n", average= sum/3 );
	printf( "Product is %d \n", product = num1 * num2 * num3  );
				
				//Smallest 
				
	if( num1 < num2 && num1 <num3 ) {
		printf( "Smallest is %d \n",num1 );
	} // end if 
	if ( num2 < num1 && num2 < num3 ) {
		printf("Smallest is %d \n",num2 );
	} // end if
	if ( num3 < num1 && num3 < num2 ) {
		printf( "Smallest is %d \n", num3);
	} // end if 
			
				// Largest //
	if( num1 > num2 && num1 > num3 ) {
		printf( "Largest is %d \n",num1 );
	} // end if 
	if ( num2 > num1 && num2 > num3 ) {
		printf("Largest is %d \n",num2 );
	} // end if
	if ( num3 > num1 && num3 > num2 ) {
		printf( "Largest is %d \n", num3);
	} // end if 
	
	return 0 ;
	
} // End of function main
