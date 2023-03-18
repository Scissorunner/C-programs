#include <stdio.h>

int main() {
	// variable declaration
	int numerator1, numerator2, denominator1, denominator2, num_result, denom_result;
    double decimal;
	// Read each fraction
	printf("Please provide the first numerator:\n");
	scanf("%d",&numerator1);
	printf("Please provide the first denominator:\n");
	scanf("%d",&denominator1);
 	printf("Please provide the second numerator:\n");
    scanf("%d",&numerator2);
	printf("Please provide the second denominator:\n");
	scanf("%d",&denominator2);
	/*compare the demonators*/
	if (denominator1 == denominator2) {
		num_result = numerator1 + numerator2;
		denom_result = denominator1; /*  or 2, they are equal */
	} 
    else {
		num_result = (numerator1 * denominator2) + (numerator2 * denominator1 );
		denom_result = denominator1 * denominator2;
        decimal = (double) num_result / (double) denom_result;
	}
	printf("The result of %d/%d + %d/%d is: %d/%d or decimal %.3f \n", numerator1,denominator1, numerator2, denominator2,num_result,denom_result, decimal);
	
    return 0;
}