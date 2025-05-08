#include <stdio.h>
#include <math.h>


int main(){
    float x ;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    int y = ceil(x);
    printf("The value of y : %d\n ,using ceil", y); // Output: 5

    int z = floor(x);
    printf("The value of z is: %d\n, using floor", z); // Output: 5

    int a = round(x);
    printf("The value of a is: %d\n, using round function", a); // Output: 5

    int y = -5;
    int b = fabs(y);
    printf("The value of y is using fabs: %d",b);
    int z;
    printf("The value of z is: "); // Output: 11
    scanf("%d", &z);
    
    float c = 16;
    float d = sqrt(c);

    printf("The value of d is: %f\n", d); // Output: 3.32

    int e;
    printf("Enter the value of e(power): ");
    scanf("%d", &e);

    int base;
    printf("Enter the value of base: ");
    scanf("%d", &base);
    
    int f = pow(base, e);
    printf("The value of f is: %d\n", f); // Output: 9
    return 0;
}