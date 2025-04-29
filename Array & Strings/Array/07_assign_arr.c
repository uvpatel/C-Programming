#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[5];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        
        printf("The value of a is %d",a[i]);
    }
    
    return 0;
}