#include <stdio.h>

int main(){
    int arr[3] = { 1,2,3};

    int *ptr = &arr;

    for (int i = 0; i < 3; i++)
    {
        printf("The value at %d is %d ",ptr+i,*(ptr+i));

    }
    

    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr2[i]);

    }
    int *ptr = &arr2;

    for (int j = 0; j < 5; j++)
    {
        printf("value stored at %x is %d",ptr,*ptr);
        
    }
    
    
    return 0;
}