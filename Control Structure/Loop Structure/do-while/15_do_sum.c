#include <stdio.h>

int main(){
    int n,sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n; // sum = sum + n;
        
    } while (n != 0); // posttest loop
    printf("sum of number is %d", sum);
    
    return 0;
}