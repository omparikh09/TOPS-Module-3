// 26. convert temperature fahrenheit to celsius 

#include<stdio.h>
int main()

{
	float fahrenheit,celsius;
	
	printf("Enter Fahrenheit:- ");
	scanf("%f",& fahrenheit);
	
	celsius = (fahrenheit - 32) * 5 / 9;
	
	printf("Fahrenheit to Celsius:- %f",celsius);
	
	
	return 0;
}
