#include <stdio.h>

int main(){
    int a = 10;
    int b = 10.50;

    float sum = a + b;
    printf("Sum : %f",sum); // Implicit typecasting

    //------------------------------------------------

    float p = 3.14;
    int p;
    p = (int)p;
    printf("The value of p: %d",p);
    
    return 0;
}