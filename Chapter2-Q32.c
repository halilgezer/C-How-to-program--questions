/*2.32 (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in
Exercise 1.11. The formulas for calculating BMI are
or
Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can evaluate
his/her BMI:
*/

#include <stdio.h>
int main()
// function main begin execute
{
	float weight, height, bmi;  // we need 3 valuable type of float
	printf( "Enter your weight (in kilograms) :\n" ); // input for weight
	scanf("%f", &weight);  //read weight
	printf( "Enter your height (in meters)    :\n" ); //input height as meters
	scanf("%f", &height);		// read height
	bmi = weight / (height*height);	//define bmi 
	printf("Attention your bmi is :%f !!\n",bmi );
	printf( "BMI VALUES\n");
	printf( "Underweight: less than 18.5\n" );
	printf( "Normal: between 18.5 and 24.9\n" );
	printf( "Overweight: between 25 and 29.9\n" );
	printf( "Obese: 30 or greater\n" );   
}
