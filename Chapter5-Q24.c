/*
Author is : Ibrahim Halil GEZER
5.24 (Temperature Conversions) Implement the following integer  functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents
of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of
all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular
format that minimizes the number of lines of output while remaining readable.
*/

#include <stdio.h>

float toCelcius ( float a ) ;
float toFahrenheit ( float a ) ;

int main ( void ) {
	float temp , tempF ;
	printf ( "Enter the temperature Celcious (0- 100)     :  " ) ;
	scanf ( "%f", &temp ) ;
	printf ( "Temperature converted to Fahrenheit         :F %.1f\n\n", toFahrenheit ( temp ) ) ; 
	
	printf ( "Enter the temperature Fahrenheit (32- 212 ) : "   ) ;
	scanf ( "%f", &temp ) ;
	printf ( "Temperature converted to Celcius            :F %.1f\n", toCelcius(temp)  ) ; 
	

} // end function main 

float toCelcius ( float a ) {
	return  ( a - 32 ) * 5 / 9 ;
}
float toFahrenheit ( float a ) {
	return  (a * 9 / 5)  + 32 ;
}



