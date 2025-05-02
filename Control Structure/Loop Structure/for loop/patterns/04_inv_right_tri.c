#include <stdio.h>

int main(){
    int row,col,n;
    printf("Enter number: ");
    scanf("%d",&n);

    for (int row = 0; row < n; row++)
    {
        printf("%*s",row * 2, "");
        for (int col = 0; col < n - row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    /*
    
    printf("%*s", width, string);
    *→ take the width from a variable instead of a
    fixed number
    Width (i*2)→ The number of spaces allocated
    before the string
    String(“”)→Actual string to print
    
*/
    return 0;
}