#include <stdio.h>
#include <math.h>
#include <stdlib.h>  // For abs()

int main() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    // Ceil returns the smallest integer greater than or equal to x
    int ceilVal = (int)ceil(x);
    printf("The value using ceil: %d\n", ceilVal);

    // Floor returns the largest integer less than or equal to x
    int floorVal = (int)floor(x);
    printf("The value using floor: %d\n", floorVal);

    // Round returns the nearest integer
    int roundVal = (int)round(x);
    printf("The value using round: %d\n", roundVal);

    // Absolute value of an integer
    int y = -5;
    int absVal = abs(y); // Use abs() for int, not fabs()
    printf("The absolute value of y using abs: %d\n", absVal);

    // Square root
    float c = 16;
    float sqrtVal = sqrt(c);
    printf("The square root of c is: %.2f\n", sqrtVal);

    // Power calculation
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double powerVal = pow(base, exponent);
    printf("The value of base^exponent is: %.0f\n", powerVal);

    return 0;
}
