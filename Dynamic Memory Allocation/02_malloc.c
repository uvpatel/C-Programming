#include <stdio.h>

int main(){
    int n,sum = 0;
    int *ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL )
    {
        printf("memory is not allocated yet.");

    }
    printf("user input of n: ");

    scanf("%d",&n);

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",ptr+i);
        sum += *(ptr+i);

    }
    printf("Sum is %d",sum);
    printf("\nValue stored at: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n The value stores %d is %d",(ptr+i),*(ptr+i));    }

        free(ptr);
    
    return 0;
}