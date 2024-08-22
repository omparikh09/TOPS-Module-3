/*
11. WAP to accept 5 numbers from user and display in reverse order using for
loop and array
*/
#include<stdio.h>

int main()
{
	int i,arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter the number :- ");
		scanf("%d",&arr[i]);
	}
	
	printf("\nPrint The Number In Reverse Order :- ");
	
	for(i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	
	return 0;
}
