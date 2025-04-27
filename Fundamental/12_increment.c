#include <stdio.h>

int main(){
    int a = 20;
    int b = 30;

    b = a++; // post increment use then increment the value.

    printf("The value of a %d",a);
    printf("\nThe value of b %d",b);
    
    printf("\n The pre incremental");
    
    b = ++a;  // pre incremental : First increment and then use
    
    
    printf("The value of a %d",a);
    printf("\nThe value of b %d",b);

    return 0;
}