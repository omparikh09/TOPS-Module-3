// 23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value A:-");//20
	scanf("%d",&a);
	printf("Enter value B:-");//10
	scanf("%d",&b);
	a=a*b;//20*10=200
	b=a/b;//200/10=20
	a=a/b;//200/20=10
	printf("answer a is:-%d",a);
	printf("\nanswer b is:-%d",b);
	
	return 0;
}
