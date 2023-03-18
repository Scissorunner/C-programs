#include <stdio.h>
#include <math.h>


int main()
{
    double A;
    double B;
    double C;

    printf("\nCalculate the hypotenuse of a right angle triangle.\n");
    printf("We'll need two dimensions. One for each right angle side.\n");

    printf("\nEnter the first dimension: ");
    scanf("%lf", &A);
    printf("\nEnter the second dimension: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("\nThe hypotenuse of a right angle triangle with dimentions -\n");
    printf("%.2lf by %.2lf is %.2lf.\n\n", A, B, C);


    return 0;
}