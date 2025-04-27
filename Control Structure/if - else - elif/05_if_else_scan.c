#include <stdio.h>

int main(){
    int a;
    if (printf("Enter a number: ") && scanf("%d", &a) ) {
        
            printf("this is a positive number\n"); // this will execute 
        } 
    else {
            printf("this is not a negative number\n"); // this will not execute
        
    } 
    return 0;
}