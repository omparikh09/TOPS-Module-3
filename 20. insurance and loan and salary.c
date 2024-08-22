// 20. Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary

#include<stdio.h>
int main()

{
	int salary,insurance,loan,remaining_salary;
	
	printf("Enter monthly salary of person's:- ");
	scanf("%d",&salary);
	
	insurance = 0.10 * salary;
	printf("Insurance premium:- %d\n",insurance);
	
	remaining_salary = salary - insurance;
	
	loan = 0.10 * remaining_salary;
	printf("Loan Installment:- %d\n",loan);
	
	salary = remaining_salary - loan;
	printf("Remaining salary:- %d",salary);
	
	return 0;
}
