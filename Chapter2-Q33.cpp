// ýt s including some optional things..
/*2.33 (Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
that calculates your daily driving cost, so that you can estimate how much money could be saved by
car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
congestion. The application should input the following information and display the user’s cost per
day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.
*/

#include <stdio.h>
int main()
{
	float miles_day, gas_cost, mpg, park , toll , gain, mtv, sigorta,kasko,bakim;
	printf( "Please enter the miles you driven in a day   :\n" );
	scanf( "%f",&miles_day );
	printf( "Please enter cost per gallon of gasoline     :\n" );
	scanf( "%f",&gas_cost );
	printf( "Please enter how many miles you drive per gallon: \n" );
	scanf( "%f", &mpg);
	printf( "Please enter your park fee                   :\n" );
	scanf( "%f", &park);
	printf ( "Please enter toll fee                       :\n" );
	scanf( "%f", &toll);
	printf( "Please enter your cars MTV                   :\n" );
	scanf( "%f", &mtv);
	printf( "Please enter your cars insurence per year    :\n" );
	scanf( "%f", &sigorta);
	printf( "Please enter your kasko                      :\n" );
	scanf( "%f", &kasko);
	printf( "Please enter your maintenance per year       :\n");
	scanf( "%f", &bakim);
	
	gain = (miles_day /mpg )*gas_cost + park + toll+(bakim+sigorta+kasko+mtv)/365 ;
	printf( "You gain totally per day  :%f",gain );
	return 0 ;
	
	
}
