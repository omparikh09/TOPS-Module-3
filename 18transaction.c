// 18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	int profit,loss,transaction;
	
	printf("Enter transaction:- ");
	scanf("%d",&transaction);
	
	if(transaction >= 5000)
	{
		printf("profit");
	}
	else
	{
		printf("loss");
	}
	
	return 0;
}
