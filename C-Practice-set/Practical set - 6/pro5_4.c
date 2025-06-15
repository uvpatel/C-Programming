#include <stdio.h>

int main(){
    int n;
    printf("enter number of rows: ");
    scanf("%d",&n);

    // outer loop for handling all the rows.
    for (int i = 0; i < n; i++)
    {
        // inner loop inner logic.
        
        // uppar part 
        for (int j = 0; j < n; j++)
        {
            printf(" * ");
        } 
        // lower part
        for (int j = n; j > 0; j--)
        {
            printf(" * ");
        }   
        
        
        printf("\n");
        
    }
    
    return 0;
}