// 28. Convart year into days and months

#include <stdio.h>

int main() 
{
	int years,months,days;
	
    printf("Enter The Number of Days:- ");
    scanf("%d", & days);
	years = days/365;//1
    
	days = days%365;//35
    months = days/30;//1
    days = days%30;//5

    printf("Total Years:- %d\n",years);
    printf("Total Months :- %d\n",months);
    printf("Remanning Days :- %d\n",days);

    return 0;
}
