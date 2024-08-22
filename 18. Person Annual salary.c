// 18. Calculate person’s Annual salary

#include <stdio.h>

int main() 
{
    int monthlySalary, annualSalary;

    printf("Enter monthly salary: ");
    scanf("%d", &monthlySalary);

    annualSalary = monthlySalary * 12;

    printf("Annual Salary :- %d\n", annualSalary);

    return 0;
}

