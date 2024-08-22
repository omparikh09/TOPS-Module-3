// 24. Accept the input month number and print number of days in that month.

#include<stdio.h>
int main()
{
	int monthno;
	printf("Enter The month number:- ");
	scanf("%d",&monthno);
	
	switch(monthno)
	{
		case 1:
			printf("In This months is 31 days");
			break;
			
		case 2:
			printf("In This month is 28 days\n");
			printf("In The leap year as 29 days");
			break;
			
		case 3: 
			printf("In This months is 31 days");
			break;	
			
		case 4: 
			printf("In This months is 30 days");
			break;	
			
		case 5: 
			printf("In This months is 31 days");
			break;	
			
		case 6: 
			printf("In This months is 30 days");
			break;	
			
		case 7: 
			printf("In This months is 31 days");
			break;
			
		case 8: 
			printf("In This months is 31 days");
			break;
			
		case 9: 
			printf("In This months is 30 days");
			break;
			
		case 10: 
			printf("In This months is 31 days");
			break;
			
		case 11: 
			printf("In This months is 30 days");
			break;
				
		case 12: 
			printf("In This months is 31 days");
			break;
							
		default:
			printf("invalid month");
			break;		
	}
	
	return 0;
}
