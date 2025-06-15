#include <stdio.h>

int main(){
    
    int n,rem,rev_n = 0;
    printf("Enter the number: ");
    scanf("%d",&n);

    do
    {
        int  rem = n % 10; // find the remender
        n /= 10;    // update number.
        rev_n = rev_n*10 + rem; // formula

    } while (n != 0);  // n > 0 while

    printf("The reverse number is %d",rev_n);
    return 0;
}