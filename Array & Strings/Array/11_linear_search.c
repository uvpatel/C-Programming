#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("The value at index %d is %d",j,arr[j]);

    }
    int element;
    printf("Enter an element to search: ");
    scanf("%d",&element);

    for (int i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            printf("element found at index %d",i);
        }
        else{

            printf("Element is not found");
        }
    }

    
    return 0;
}