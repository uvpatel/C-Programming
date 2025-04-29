#include <stdio.h>

int main(){
    int matrix[2][3] = {
        {1,2,3},{4,5,6}
    };
    
    int matrix2[3][2] = {
        {1,2},
        {3,4},
        {5,6}
    };

    int mult[2][2];
    for (int i = 0; i < 2 ; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mult[2][2] += matrix[i][k] * matrix2[k][j];
            }
            
        }
        
    }
    printf("Product of the matrices:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", mult[i][j]);
        }
        
    }
    
    
    return 0;
}