#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("this is a positive number\n"); // this will execute 
        printf("this is not a negative number\n"); // this will not execute
    
    return 0;
}