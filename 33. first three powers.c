// 33. C Program to Integer and print First Three Powers(N^1,N^2,N^3)

#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("Enter The Number:- ");
	scanf("%d",&num);
	
	a = pow(num , 1);
	b = pow(num , 2);
	c = pow(num , 3);
	
	printf("The Powers of 3 Numbers:- %d, %d, %d",a,b,c);
	
	return 0; 
}
