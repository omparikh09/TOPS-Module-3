// 25. Accept 5 Expense from user and find average of expense.

#include<stdio.h>
int main()
{
	int expense1,expense2,expense3,expense4,expense5,total_expense;
	float average;
	
	printf("Enter Expense1:- ");
	scanf("%d",&expense1);
	
	printf("Enter Expense2:- ");
	scanf("%d",&expense2);
	
	printf("Enter Expense3:- ");
	scanf("%d",&expense3);
	
	printf("Enter Expense4:- ");
	scanf("%d",&expense4);
	
	printf("Enter Expense5:- ");
	scanf("%d",&expense5);
	
	total_expense = expense1+expense2+expense3+expense4+expense5;
	printf("total expense:- %d\n",total_expense);
	
	average = total_expense/5;
	printf("Average of Expenes:- %f",average);
	
	return 0;
}
