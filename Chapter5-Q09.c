/*
Author is : Ibrahim Halil GEZER
5.9 (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three
hours and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum
charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours
at a time. 
Write a program that will calculate and print the parking charges for each of three customers
who parked their cars in this garage yesterday. You should enter the hours parked for each
customer. Your program should print the results in a neat tabular format, and should calculate and
print the total of yesterday's receipts. The program should use the function calculateCharges to
determine the charge for each customer. Your outputs should appear in the following format:
Car 	  Hours  	Charge
1 		  1.5 		2.00
2 		  4.0 		2.50
3 		  24.0 		10.00
TOTAL   29.5 		14.50

*/
#include <stdio.h>

float calculateCharges (float a) ; // function prototype
 
int main (void)
// function main begins execute
{
	float Hcustomer1, Hcustomer2, Hcustomer3 ; // Hors of each of the customers. 
	
	printf ("How many hour(s) parked 1. customer: ") ; // ask hours of time
	scanf ("%f", &Hcustomer1) ; // read it 
	printf ("How many hour(s) parked 2. customer: ") ;
	scanf ("%f", &Hcustomer2) ;
	printf ("How many hour(s) parked 3. customer: ") ;
	scanf ("%f", &Hcustomer3) ;
	printf ("%s %12s %15s\n", "Car", "Hours", "Charge"  ); // print title of tabular form 
	
	float charges1 = calculateCharges (Hcustomer1) ; 
	float charges2 = calculateCharges (Hcustomer2) ;
	float charges3 = calculateCharges (Hcustomer3) ;
	float totalCharges = charges1 +  charges2 + charges3 ; // total charges

	printf ("%d %13.2f %15.2f\n", 1 , Hcustomer1, charges1 );
	printf ("%d %13.2f %15.2f\n", 2 , Hcustomer2, charges2 );
	printf ("%d %13.2f %15.2f\n", 3 , Hcustomer3, charges3 );
	
	float Htotal = Hcustomer1 + Hcustomer2 + Hcustomer3 ;  // total hours 
	printf ("%s %9.2f %15.2f\n", "Total", Htotal, totalCharges  );
	
	return 0 ;
	
} // end function main 

// defind functin 
float calculateCharges (float a) {
	
	if (a > 0 && a <= 3  )  
		return  2 ;  // default 2 dolars 
		
	else if  (a >3 && a < 24 )
		  return (2 + (a - 3) * 0.5 ) ; //
		  
  else 
  		 return 10 ; // if they parked 24 hours it's default 10 dollars .
		
}
