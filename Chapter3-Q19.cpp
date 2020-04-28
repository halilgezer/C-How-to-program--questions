/*3.19 (Sales Commission Calculator) One large chemical company pays its salespeople on a commission
basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For
example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of
$5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last
week and will calculate and display that salesperson's earnings. Process one salesperson's figures at a
time. Here is a sample input/output dialog:

*/

#include <stdio.h>
#include <stdbool.h>
int main () { //function main begins execute
	float sale , salary, comis ;
	while (true) { // while begins 
		printf ( "Enter sales in dollars (-1 to end) : ") ;// ask  sales amount
		scanf ("%f", &sale); //read sales
		if ( sale == -1 ) { // ýf sale is -1 break the loop 
		   return 0 ;
		}	// if not 
		salary = 0.09* sale + 200 ; //   calculate salary 
		printf ( "Salary is $ %.2f : \n",salary ) ; 
	} // end while 
	return 0 ;
} //end of function main 
