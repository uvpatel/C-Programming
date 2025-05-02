#include <stdio.h>

int main(){
    int row,col,n;
    
    printf("Enter the number: ");
    scanf("%d",&row);

    for (int row = 0; row < n; row++)
    {
        for (int col = n; col > 0 ; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}