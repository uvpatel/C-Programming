#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    

    for (int i = 0; i < n; i++) // for rows
    {
        for (int j = 1; j <= i+1; j++)
        {
            printf("%d ", j);
            
        }
        printf("\n");
    }
    
    
    return 0;
}