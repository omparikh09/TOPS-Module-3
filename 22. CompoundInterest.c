/*
22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    double principle,rate,time,amount,CompoundInterest;

    printf("Enter the principle amount :- ");
    scanf("%lf",&principle);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf",&rate);
    printf("Enter time (in years): ");
    scanf("%lf",&time);

    amount = principle * pow((1+rate/100),time);

    CompoundInterest = amount - principle;

    printf("Compound Interest = %.2lf\n", CompoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}

