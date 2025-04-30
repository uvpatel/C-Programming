#include <stdio.h>

int main(){

    /*
    
    * --> At value at address of operator
    & --> At address of operator.
    
    */
    int a = 5;
    int *ptr = &a;

    printf("The value of a is: %d",a);
    printf("\nThe adress of a is : %x",ptr);
    printf("\nThe value stored in a ptr is : %d",*ptr);


    *ptr = 7;

    printf("The value at ptr is now %d\n",*ptr);
    printf("What will be my a then ? %d",a); // a's value now 7 becuase of assignment 
    return 0;
}