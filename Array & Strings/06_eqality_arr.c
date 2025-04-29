#include <stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5};

    int arr2[] = {1,2,3,4,5};

    int arr3[] = {1,2,3,4,6};

    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == arr2[i])
        {
            printf("The all elements are equal");
        }
        else if (arr1[i] != arr2[i])
        {
            printf("Arrays differ at index %d: arr1[%d],arr2[%d] = %d\n",i,i,arr2[i]);
        }
        
        else{
            printf("The all elements are not equal");
            
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == arr3[i])
        {
            printf("The all elements are equal");
        }
        else if (arr1[i] != arr3[i])
        {
            printf("Arrays differ at index %d: arr1[%d],arr3[%d] = %d\n",i,i,arr3[i]);
        }
        
        else{
            printf("The all elements are not equal");
            
        }
    }
    
    return 0;
}