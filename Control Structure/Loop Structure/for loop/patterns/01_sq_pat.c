#include <stdio.h>

int main(){
    int row,col;

    printf("enter number of row: ");
    scanf("%d",&row);

    printf("enter number of column: ");
    scanf("%d",&col);

    for (int i = 0; i < row; i++)  // outer loop
    {
        for (int j = 0; j < col; j++)  // inner loop
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}