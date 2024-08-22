// 21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without 3 variable.

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter value A:-");
	scanf("%d",&a);
	printf("Enter value B:-");
	scanf("%d",&b);
	
	
	c=a;
	a=b;
	b=c;
	printf("sawpping a is %d and b is %d \n",a,b);
	
	
	a=a+b;//20+10=30
	b=a-b;//30-10=20
	a=a-b;//20-10=10
	printf("answer a is:-%d",a);
	printf("\nanswer b is:-%d",b);
	
}
