#include <stdio.h>
#include <math.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nPlease enter an operator ( + - * / ): ");
    scanf("%c", &operator);

    printf("\nPlease enter your first number: ");
    scanf("%lf", &num1);

    printf("\nPlease enter your second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n%.2lf + %.2lf = %.3lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n%.2lf - %.2lf = %.3lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n%.2lf * %.2lf = %.3lf\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n%.2lf / %.2lf = %.3lf\n", num1, num2, result);
        break;
    
    default:
        printf("'%c' Is not a valid operator, please enter ( + - * / )", operator);
        break;
    }

    return 0;
}