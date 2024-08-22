// 24. Accept 5 employees name and salary and count average and total salary.

#include<stdio.h>
int main()
{
	int e1,e2,e3,e4,e5,salary,total_salary;
	float average;
	
	
	printf("Enter 5 employe salary:- ");
	scanf("%d%d%d%d%d",&e1,&e2,&e3,&e4,&e5);
	
	total_salary=e1+e2+e3+e4+e5;
	printf("Total salary:- %d \n",total_salary);
	
	average = total_salary/5;
	printf("average salary:- %f",average);
	
	return 0;
}
