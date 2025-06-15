#include <stdio.h>

int main(){
    int x = 25, y = 4;
    
    printf("The sum is: %d\n", x + y);
    printf("The difference is: %d\n", x - y);
    printf("The product is: %d\n", x * y);
    printf("The quotient is: %d\n", x / y);
    printf("The remainder is: %d\n", x % y);
    

    // You can take user input and perform operation

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("The sum is: %d\n", a + b);
    printf("The difference is: %d\n", a - b);
    printf("The product is: %d\n", a * b);
    printf("The quotient is: %d\n", a / b);
    printf("The remainder is: %d\n", a % b);

    return 0;
}