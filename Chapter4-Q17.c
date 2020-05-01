/*
Author is : Ibrahim Halil GEZER
4.17 (Calculating Credit Limits) Collecting money becomes increasingly difficult during periods
of recession, so companies may tighten their credit limits to prevent their accounts receivable
(money owed to them) from becoming too large. In response to a prolonged recession, one company
has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that
analyzes the credit status of three customers of this company. For each customer you’re given:
a) The customer’s account number
b) The customer’s credit limit before the recession
c) The customer’s current balance (i.e., the amount the customer owes the company).
Your program should calculate and print the new credit limit for each customer and should
determine (and print) which customers have current balances that exceed their new credit limits.
*/
#include <stdio.h>

int main (void) 
{	
	float credit_old , credit_new, balance;
	int account, i  ; // initializate i 
	
	for (i=1; i<=3; i++ )  {
		printf ( "Enter for %d. custumer account number: " , i);
		scanf ("%d",&account);
		printf ( "Enter for %d. custumer credit limit before recession:  ",i);
		scanf ("%f",&credit_old );
		printf ( "Enter for %d. custumer current balance:  ",i);
		scanf ("%f", &balance);
		
		credit_new = credit_old /2;
		
		if ( balance > credit_new ) 
			printf ( "The custumer which account: %d has exceeded their credit limit. \n", account ) ;
	
	} // end for 
	return 0 ;
} // end function main 
