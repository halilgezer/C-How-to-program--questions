/* 
Author is : Ibrahim Halil GEZER
5.26 (Perfect Numbers) An integer number is said to be a perfect number if its factors, including
1 (but not the number itself), sum to the number. For example, 6 is a perfect number because 6 =
1 + 2 + 3. Write a function perfect that determines if parameter number is a perfect number. Use
this function in a program that determines and prints all the perfect numbers between 1 and 1000.
Print the factors of each perfect number to confirm that the number is indeed perfect. Challenge
the power of your computer by testing numbers much larger than 1000.
*/
#include <stdio.h>

int perfect ( int a  ) ; 

int main ( void ) {
	int i ;
	
	for ( i = 2; i <=1000; i++ ){ 
		
		perfect ( i )  ; // test 2 to 1000
	
	}
	return 0 ;
} // end main 

int perfect ( int a  ) {
	int  j ;
	int total = 0 ;
	
//	for ( a = 2; a <=100; a++ ){
		
		for ( j = 1; j <= a-1 ; j++  ) { // at most j must be a-1 
										//because we dont want to test a%a 
		
			if ( a % j == 0 )  
				total += j ;		
		} // end inner  for 
		
		if ( total == a  ) 
			printf ( "%d is a perfect number . \n" , a ) ;
			
//	}  // end outer for 
	
	return 0 ;
} // end function perfect .





