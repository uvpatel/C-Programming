#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int rev_arr[n];

    for (int i = 0; i < n; i++)
    {
        rev_arr[i] = arr[n - i -1];
    }
    
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",rev_arr[i]);
    }
    
    return 0;
}