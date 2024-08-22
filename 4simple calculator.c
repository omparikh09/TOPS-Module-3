// 4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main()
{
	char choice;
	
	printf("Enter choice:- ");
	scanf("%c",&choice);
	
	int n1,n2,ans;
	
	printf("Enter number 1:- ");
	scanf("%d",&n1);
	
	printf("Enter number 2:- ");
	scanf("%d",&n2);
	
	switch(choice)
	{
		case '+':
			ans=n1+n2;
			printf("%d is addition",ans);
			break;
		
		case '-':
			ans=n1-n2;
			printf("%d is subtraction",ans);
			break;
		
		case '*':
			ans=n1*n2;
			printf("%d is multiplication",ans);
			break;
			
		case '/':
			
			if(n2!=0)
			{
				ans=n1/n2;
				printf("%d is division",ans);	
			}
			else
			{
				printf("can't divide by zero");
			}
			break;
			
		case '%':
			ans=n1%n2;
			printf("%d is modulo",ans);
			break;
		
		default:
			printf("invalid choice");
			break;
	}
	
	return 0;
}
