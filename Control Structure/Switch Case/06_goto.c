#include <stdio.h>


/*
▪ jump to some part of the
code
The goto statement allows
transfer control of the program
to the specified label

*/
int main(){
    int n = 24;

    if (n % 2 == 0)
    {
        goto jump_here;
    }
    printf("odd number");

    jump_here:
       printf("Even number\n");   

    return 0;
}