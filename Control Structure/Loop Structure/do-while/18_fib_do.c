#include <stdio.h>

int main(){
    int n, a = 0, b = 1, next, i = 0;

    printf("enter number of termes: ");
    scanf("%d",&n);

    printf("Fibonacci series: %d %d",a,b);
    do
    {
        next = a + b;
        printf(", %d",next);
        a = b;
        b= next;
        i++;
    } while (i < n-1);
    
    return 0;
}