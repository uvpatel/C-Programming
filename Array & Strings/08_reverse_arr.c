#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value at index %d: ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at index %d is %d\n",i,arr[i]);

    }


    printf("The reversed array is\n");
    for (int i = n -1; i>=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");

    
    return 0;
}