#include <stdio.h>

void display(int arr[],int n);

int main(){
    int arr[] = {1,2,3,4};
    display(arr,4);
    return 0;
}
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

