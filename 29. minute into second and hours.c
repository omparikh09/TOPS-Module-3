// 29. Convert minutes into seconds and hours.

#include<stdio.h>
int main()
{
	int second,hour,minute;
	
	printf("Enter The Number of minutes:- ");
	scanf("%d",&minute);
	
	second = minute * 60;
	hour = minute / 60;
	
	printf("Total Seconds Are:- %d\n",second);
	printf("Total hours are:- %d",hour);
	
	return 0;
}
