/* 3.18 (Credit Limit Calculator) Develop a C program that will determine if a department store
customer has exceeded the credit limit on a charge account. For each customer, the following facts
are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each of these facts, calculate the new balance (= beginning balance
+ charges – credits), and determine if the new balance exceeds the customer's credit limit. For those
customers whose credit limit is exceeded, the program should display the customer's account number,
credit limit, new balance and the message “Credit limit exceeded.” Here is a sample input/output
dialog:
Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
Account: 100
Credit limit: 5500.00
Balance: 5894.78
Credit Limit Exceeded.

*/

#include <stdio.h>
int main ()
{ // function main begin
	int account ;
	float balance_f, balance_l, limit ,credit, charge ;
	while (10 ) { // while begins 
		printf ( "\nEnter account number (-1 to end): ") ;// ask the account number
		scanf  ( "%d",&account) ; // read it
		if ( account == -1) { // ýf ýt s -1 do nothing 
			return 0 ;
		}	//end if 
	printf ( "Enter beginning balance: " ) ; 
	scanf  ( "%f", &balance_f );
	printf ( "Enter total charges: " ) ;
	scanf  ( "%f", &charge );
	printf ( "Enter total credits: ") ;
	scanf  ( "%f", &credit ) ;
	printf (  "Enter credit limit: ") ;
	scanf  (  "%f",&limit );
	balance_l =balance_f + charge - credit ; //last balance is first one ....
//	printf ( "your new balance is: %f ", balance_l) ;
	if (balance_l > balance_f ){ // ýf customer exceed his account 
		printf ("Account: %d",account); 
		printf( "\nCredit limit: %.2f",limit);
		printf( "\nBalance: %.2f",balance_l );
		printf ("\nCredit limit exceeded.\n") ;
	} // end if 
		
	} // while ends
	return 0 ;
} // end of function main 
