#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

    }
    
    printf("The reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}