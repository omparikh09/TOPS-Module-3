// 7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int marks;
	
	printf("Enter subject marks:- ");
	scanf("%d",&marks);

	if(marks>35)
	{
		printf("pass");
	}
	else
	{
		printf("fali");
	}
}
