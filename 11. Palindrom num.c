//11. WAP to perform Palindrome number using for loop and function

#include<stdio.h>
int Palindrome(int num)
{
	int orinum = num;
	int rev = 0;
	int rem;
	
	
	for(;num != 0;num /= 10)
	{
		rem = num % 10;
		rev = (rev*10) + rem;
	}
	
	return orinum == rev;
}

int main()
{
	int num;
	
	printf("Enter a Number :- ");
	scanf("%d",&num);
	
	if(Palindrome(num))
	{
		printf("\n%d is the palindrom number",num);
	}
	else
	{
		printf("\n%d is the not a palindrome number",num);
	}
}
