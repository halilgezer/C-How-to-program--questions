/*
3.48 (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see
that your heart rate stays within a safe range suggested by your trainers and doctors. According to the
American Heart Association (AHA) (www.americanheart.org/presenter.jhtml?identifier=4736),
the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in
years. Your target heart rate is a range that is 50–85% of your maximum heart rate. [Note: These formulas
are estimates provided by the AHA. Maximum and target heart rates may vary based on the
health, fitness and gender of the individual. Always consult a physician or qualified health care professional
before beginning or modifying an exercise program.] Create a program that reads the user’s
birthday and the current day (each consisting of the month, day and year). Your program should calculate
and display the person’s age (in years), the person’s maximum heart rate and the person’s target
heart rate range.
*/

#include <stdio.h>
int main ()
{
	int day_b,month_b, years_b, day_t, month_t, years_t, age, maxi,target ;
	printf ( "Enter your birthday (dd/mm/yyyy):  ");
	scanf ( "%d/%d/%d",&day_b,&month_b, &years_b );
	printf ( "Enter todays date (dd/mm/yyyy): " );
	scanf ("%d/%d/%d",&day_t, &month_t, &years_t);
	if ( years_b > 2020 || years_t < 2020 ) 
		printf ("Please enter your birtday and todays day right !\n");
	else { // else begins
		if  ( month_t > month_b) { // if begins
			age = years_t - years_b ;
 			maxi = (220 - age ) *0.85 ;
			target = (220 - age ) *0.5 ;
			printf ( "Your age is : %d\n",age);
			printf( "Your maximum heart rate is : %d\n", maxi );
			printf ( "Your target heart rate range is : %d\n", target );
		} // end if 
	} // end else
	return 0 ;
} // end function main
