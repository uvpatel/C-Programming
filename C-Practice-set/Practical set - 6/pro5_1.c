#include <stdio.h>

int main(){
    int rows;
    printf("Enter a rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) // for number of rows
    {
        for (int j = 0; j < i + 1; j++) // for each row find relation of j and i
        
        {
            printf("* ");

        }
        printf("\n");
    }
    
    return 0;
}