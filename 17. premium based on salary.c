// 17. Calculate person's Insurance premium based on salary. 

#include<stdio.h>
int main()
{
	int insurance_premium,salary;
	
	printf("Enter the person salary:- ");
	scanf("%d", & salary);

	insurance_premium = salary * 0.10;
	printf("Insurance Premium based on salary:- %d",insurance_premium);
	
	return 0;
}
