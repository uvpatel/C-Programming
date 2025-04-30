#include <stdio.h>

int main(){
    int a[4] = {0,1,2,3};
    int *p = &a[0];
    printf("The value at P is: %d",*p);
    p += 2;

    printf("The value at P is: %d",*p);
    
    return 0;
}