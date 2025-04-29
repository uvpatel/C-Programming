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
    
    int pos;
    printf("Enter the postion element which you want to delete: ");
    
    scanf("%d",pos);
    
    for (int i = pos; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    
    n--;
    
    printf("The array is: ");
    
    for (int j = 0; j < n; j++)
    {
        printf("The value at index %d is %d",j,arr[j]);

    }
    printf("\n");
    return 0;
}