#include <stdio.h>

int main(){
    int row,col,n;

    printf("enter number: ");
    scanf("%d",&n);

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}