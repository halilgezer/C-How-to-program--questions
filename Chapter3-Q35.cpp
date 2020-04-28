/*3.35 (Palindrome Tester) A palindrome is a number or a text phrase that reads the same backward
as forward. For example, each of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number
into its individual digits.]
*/

/* algorithm
lets say number is abcde
number/10000 = a
number/1000 %10 =b 
number/10000  %10 = c 
number/10%  10= d
number %10 =e
it must be a=e and b=d 
*/
#include<stdio.h>
int main () 
{ //function main begins execution
	int a, b, c, d, e , number;
	printf ( "Enter a five digit number:  "); // ask a five digit number
	scanf ("%d",&number); // read it 
	if (number<10000 || number > 99999 )  { // ýf begins // control the number how many digit it has
		printf ("It's not five digit number!\n" ) ;
	} // end if 
	else { // ese begin 
		a = number /10000 ;
		b = number /1000 % 10 ;
		c = number / 100 % 10 ;
		d = number / 10 % 10 ;
		e = number % 10 ;
	//	printf ("a is %d\nb is %d\nc is %d\nd is %d\ne is %d\n",a,b,c,d,e); // this was a control text
		if (a ==e && b ==d)  //condition of polindrome
			printf ("This is a polindrome. \n"); 
		else 
			printf ( "This is not a polindrome number. \n" );		
	}	// else end
	return 0 ;
} // function main ends


/* another solution way  This one is more wisely.

#include<stdio.h>

int main(){
int num, temp, reverse=0;

printf("Enter the number you want to check:");
scanf("%i", &num);

temp=num;

while(temp!=0){
    reverse= (reverse * 10) + (temp %10);
    temp/=10;
}

if(num == reverse)
    printf("it's palindrome number");
else
    printf("It's NOT a palindrome number");
return 0;
} 
*/
