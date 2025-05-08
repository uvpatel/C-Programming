#include <stdio.h>

int main(){
    
    int n,rem,rev_n = 0;
    printf("Enter the number: ");
    scanf("%d",&n);

    do
    {

        int  rem = n % 10;
        n /= 10;
        rev_n = rev_n*10 + rem;

    } while (n != 0);
    printf("The reverse number is %d",rev_n);
    return 0;
}