#include <stdio.h>

int main(){
    float x,y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    // using ternay operator we can write simple if-else statement.
    
    int greter = (x > y) ? printf("%d is greater than %d",x,y) :  printf("%d is greater than %d",y,x);

    return 0;
}