/*
A
B C
D E F
G H I J 
K L M N O
*/
#include<stdio.h>
int main()
{
	int i,j;
	char latter = 'A';

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",latter);
			latter++;
		}
		printf("\n");
		
	}
	return 0;
}


