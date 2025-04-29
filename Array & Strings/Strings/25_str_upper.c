#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    
    char str[20];
    int count = 0 ,n;
    printf("enter a string: ");

    scanf("%[^n]s",str);

    n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        if (isupper(str[i]))
        {
            printf("%c\n",str[i]);
            count++;
        }
        
    }
    printf("\n The number of count is : %d",count);
    return 0;
}