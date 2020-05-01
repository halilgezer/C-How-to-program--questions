/*
Author is : Ibrahim Halil GEZER
4.39 (Tax Plan Alternatives; The “FairTax”) There are many proposals to make taxation fairer.
Check out the FairTax initiative in the United States at
www.fairtax.org/site/PageServer?pagename=calculator
Research how the proposed FairTax works. One suggestion is to eliminate income taxes and most
other taxes in favor of a 23% consumption tax on all products and services that you buy. Some
FairTax opponents question the 23% figure and say that because of the way the tax is calculated, it
would be more accurate to say the rate is 30%—check this carefully. Write a program that prompts
the user to enter expenses in various expense categories they have (e.g., housing, food, clothing,
transportation, education, health care, vacations), then prints the estimated FairTax that person
would pay.
*/
#include <stdio.h>

int main ( void )
{
	float tax, house_ex, food_ex, cloth_ex ;
	float total , port_ex, edu_ex, health_ex, holiday_ex ;
	printf ( "Enter your housing expenses for 1 month: " );
	scanf ( "%f", &house_ex );
	printf ( "Enter your food expenses for 1 month: " );
	scanf ( "%f", &food_ex );
	printf ( "Enter your clothing expenses for 1 month: " );
	scanf ( "%f", &cloth_ex );
	printf ( "Enter your transportation expenses for 1 month: " );
	scanf ( "%f", &port_ex );
	printf ( "Enter your education expenses for 1 month: " );
	scanf ( "%f", &edu_ex );
	printf ( "Enter your healthcare expenses for 1 month: " );
	scanf ( "%f", &health_ex );
	printf ( "Enter your vacations expenses for 1 month: " );
	scanf ( "%f", &holiday_ex );
	
	total =house_ex + food_ex + cloth_ex + port_ex + edu_ex + health_ex + holiday_ex ;
	
	printf ("Your total expenses is : $ %.3f \n", total) ;
	printf ( "You give $ %.3f tax in a year. ",total*0.23) ;
}
