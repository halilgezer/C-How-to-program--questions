/* 3.21 (Salary Calculator) Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee, and should determine
and display the employee's gross pay. Here is a sample input/output dialog:

*/

#include <stdio.h>
int main () 
{ // function main begins execute
	int hour ; // hours of worked 
	float rate , salary; // employees hourly rate
	
	while (true) { // while begins 
		printf ( "Enter # hours worked (-1 to end): ") ; // ask hours
		scanf ( "%d", &hour) ; // read hours
		if ( hour == -1 ) 
			return 0 ;
		printf ( "Enter hourly rate of the worker ($00.00): " );
		scanf  ( "%f",&rate); // read rate
		if ( hour <= 40 ) {//if begins 
			salary = hour * rate ;
			printf ( "Salary is $ %0.2f\n" , salary);
		}
		else { // hour > 40 then it means that pays time and a half 
			salary = (hour-40)*1.5*rate + 40* rate;
			printf ( "Salary is $ %0.2f\n", salary) ;	
		}
	}	
	return 0 ;
} // funciton main ends 
