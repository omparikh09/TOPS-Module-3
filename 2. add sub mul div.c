/*
2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/

#include <stdio.h>

int main() 
{
	
    char operator;
    double num1, num2, result;

    printf("Enter an operator(+,-,*,/) :- ");
    scanf(" %c",&operator);
    
	printf("Enter The Number 1 :- ");
    scanf("%lf",&num1);
    
    printf("Enter The Number 2 :- ");
    scanf("%lf",&num2);

    switch (operator) {
        
		case '+':
            result = num1 + num2;
            printf("%lf + %lf = %lf\n", num1, num2, result);
            break;
        
		case '-':
            result = num1 - num2;
            printf("%lf - %lf = %lf\n", num1, num2, result);
            break;
        
		case '*':
            result = num1 * num2;
            printf("%lf * %lf = %lf\n", num1, num2, result);
            break;
        
		case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
                printf("%lf / %lf = %lf\n", num1, num2, result);
            } 
			else 
			{
                printf("Error! Division by zero.\n");
            }
            break;
            
        default:
            printf("Invalid Choice!\n");
            break;
    }

    return 0;
}

