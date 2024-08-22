// 17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main()
{
	int n,cnt=0,cnto=0,cnte=0;
	
	while(cnt<5)
	{
		printf("Enter The numbers:- ");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			cnte++;
		}
		else
		{
			cnto++;
		}
		cnt++;
	}
	printf("\nNumber is even :- %d",cnte);
	printf("\nNumber is odd :- %d",cnto);
	
	return 0;
}
