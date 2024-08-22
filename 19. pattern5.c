/*
A 
A B
A B C 
A B C D 
A B C D E
*/
#include<stdio.h>
int main()
{
	int i,j;
	char latter;
	
	for(i=0;i<5;i++)
	{
		latter = 'A';
		for(j=0;j<=i;j++)
		{
			printf("%c ",latter);
			latter++;
		}
		printf("\n");
	}
	
	return 0;
}
