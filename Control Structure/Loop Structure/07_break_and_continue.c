#include <stdio.h>

int main(){
    int num, sum;
    printf("Enter possible numbers to sum: ");

    while (1)
    {
        printf("enter a number: ");
        scanf("%d",&num);
        if (num < 0)
        {
            break;
        }
        sum += num;

    }
    printf("Total sum: %d\n",sum);

    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int i = 0;
    while (i < n)
    {   
        if (i == 5)
        {
            continue; // continue statement is use for skip that perticular iteration.
        }
        
        printf("%d",i);
        i++;

    }
    

    
    return 0;
}