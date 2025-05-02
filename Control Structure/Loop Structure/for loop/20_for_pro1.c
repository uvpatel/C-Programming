#include <stdio.h>

int main(){
    // All expression are optional

    // Case:1 without initialization

    int i;
    for ( i = 0; i <= 5; i++)
    {
        printf("\ni = %d",i);
    }
    printf("\n The value of i after for loop is %d",i);
    
    
    // Case:2 Initialization before for loop
    
    int j = 1;
    for (; j < 5;j++)
    {
        printf("\ni = %d",j);
    }
    printf("\n The value of i after for loop is %d",i);
    
    // case:3 Two variable initialization in for loop.


    int i,j;
    for (int i = 0; j <= 5; i++)
    {
        printf("\ni = %d, j = %d",i,j);

    }
    printf("\n The value of i after for loop is %d and j is %d",i,j);
    
    
    
    
    // case: 4 two var, one without init.
    
    int k,l;
    for (l = 0; k <= 5 ; k++)
    {
        printf("\nk =%d , j = %d",k,l);
        
    }
    printf("\n The value of k after for loop is %d and l is %d",k,l);
    

    return 0;
}