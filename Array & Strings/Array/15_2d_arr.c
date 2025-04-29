#include <stdio.h>

int main(){
    // int matrix[row][col];
    int matrix[3][3];

    printf("Enter the elements for the 3x3 matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element at position [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);

        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d",matrix[i][j]);

            }
            printf("\n"); // New line after each row
            
        }
        
    }
    
    return 0;
}