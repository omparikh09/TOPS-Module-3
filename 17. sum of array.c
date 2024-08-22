#include <stdio.h>

int main() 
{
    int numbers[5];
    int i,sum=0;

    for (i=0;i<5;i++) 
	{
		printf("\nEnter 5 numbers :- ");
        scanf("%d", &numbers[i]);
    }

    for (i=0;i<5;i++) 
	{
        sum += numbers[i];
    }

    printf("\nSum of array is :- %d", sum);

    return 0;
}

