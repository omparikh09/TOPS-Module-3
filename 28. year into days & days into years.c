// 30. WAP to convert years into days and days into years.

#include<stdio.h>
int main()
{
	int days,years;
	
	printf("Enter The Numbers of Days:- ");
	scanf("%d", & days);
	
	years = days/365;
	
	printf("Number of Years:- %d\n",years);
		
	printf("Enter The Numbers of years:- ");
    scanf("%d", & years);
	
	days = years*365;
	
	printf ("number of days:- %d",days);
	
	
	return 0;
}
