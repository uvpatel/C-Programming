#include <stdio.h>

int main(){
    
    int n,rem,rev_n = 0;
    printf("Enter the number: ");
    scanf("%d",&n);


    while (n != 0)
    {
        int  rem = n % 10;
        n /= 10;
        rev_n = rev_n*10 + rem;
        
    }
    if (rev_n == n)
    {
        printf("The number is palindrome.\n");
    }
    else
    {
        printf("The number is not palindrome.\n");
    }
    
    
    return 0;
}