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

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("the sum of array element is %d",sum);

    return 0;
}