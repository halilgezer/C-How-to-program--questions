/* 3.20 (Interest Calculator) The simple interest on a loan is calculated by the formula
interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the
division by 365 (days). Develop a program that will input principal, rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula.
Here is a sample input/output dialog:
Enter loan principal (-1 to end): 1000.00
Enter interest rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00

*/
#include<stdio.h>
int main()
{ // function main begins execute
	float rate, principal, interest ;
	int days ;
	while ( true ){ // while begins  
		printf ( "Enter loan principal (-1 to end): ") ; //askk the principal from user
		scanf  ( "%f",&principal ); //read it
		if ( principal == -1 ) { // if begins // ýf principal is not different from -1 
			return 0 ; // break loop
		} // end if 
		printf ( "Enter interest rate: "); 
		scanf ( "%f",&rate); // read rate
		printf ( "Enter term of the loan in days: ");
		scanf ("%d",&days); // read days 
		interest = principal * rate *days / 365 ; 
		printf ("The interest charge is $ %.2f\n",interest );
	} // end while
	return 0 ;
} // end funtion main 

