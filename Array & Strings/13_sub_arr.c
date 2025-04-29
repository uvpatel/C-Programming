#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int start,end;
    printf("Enter the starting point and ending point: ");
    scanf("%d %d",&start,&end);

    int subArr[100];
    int j = 0;

    for (int i = start ; i <=end; i++)
    {
        subArr[j] = arr[i];
    }
    printf("subarray of the given array: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d",subArr);
    }
    
    return 0;
}