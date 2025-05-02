#include <stdio.h>

int main(){
    int sum = 0,i;
    for ( i = 0; i <= 10; i++)
    {
        sum = sum + (i*i);
    }
    printf("sum of 5 natural number is: %d ",sum);
    
    return 0;
}