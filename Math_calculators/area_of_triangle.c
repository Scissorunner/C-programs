#include <stdio.h>

int main() {
    float area;
    float base;
    float height;

    printf("Enter the base length: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);
    area = .5 * base * height;
    printf("Area is: %.3f\n", area);

    return 0;
}