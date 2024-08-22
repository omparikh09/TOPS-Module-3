// 6. Write a program in C to count the total number of alphabets,digits and special character in string.

#include<stdio.h>
int main()
{
	char str[100];
	int alphabets = 0,digits = 0,specialchars = 0;
	int i = 0;
	
	printf("Ente the string :- ");
	gets(str);
	
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <='Z'))
		{
			alphabets++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			digits++;
		}
		else
		{
			specialchars++;
		}
		i++;
	}
	
	printf("\nAlphabets :- %d",alphabets);
	printf("\nDigits :- %d",digits);
	printf("\nSpecialchars :- %d",specialchars);
	
	return 0;
}

