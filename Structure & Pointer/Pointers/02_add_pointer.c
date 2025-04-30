#include <stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;

    printf("The address of a is : %x\n",ptr);
    printf("The address of a is : %p\n",ptr);
    printf("The address of a is : %u\n",ptr);

    
    return 0;
}