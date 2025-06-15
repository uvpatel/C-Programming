#include <stdio.h>

int main(){
    int rows;
    printf("Enter a number: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j >= i + 1; j--)
        {
                printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}