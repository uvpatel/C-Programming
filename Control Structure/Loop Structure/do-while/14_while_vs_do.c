#include <stdio.h>

int main(){
    int i = 0, n;
    do
    {
        printf("hello\n");
    } while (i > 0);   // posttest loop
    printf("\n out of loop\n");
    
    while (i > 0)       // pretest loop
    {
        printf("hello\n");
    }
    printf("\n out of loop\n");
    return 0;
}