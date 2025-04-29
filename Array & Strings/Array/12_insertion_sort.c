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

    /*
    
    Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in
each iteration.

Step-1 First element is considered as a sorted, take a second element and stored it
separately in a key variable

Step-2 compare first element with key, if it is grater than key then key will be fall first
before the first element.

Step-3 Now first 2 elements are sorted (smaller placed first) , now 3
rd element is compared with left (first 2). Placed it just behind the element smaller than it. If there is no element
smaller than it, then place it at the beginning of the array.

Step-4 repeatedly follow these steps place every unsorted element at its correct position
*/


int n;
printf("Enter the number of elemets: ");
scanf("%d",&n);

int arr[n];
printf("Enter the array elemets: ");

for (int i = 0; i < n; i++)
{
    printf("enter the value at index %d: ",i);
    scanf("%d",&arr[i]);
}
for (int j = 0; j < n; j++)
{
    printf("The value at index %d is %d",j,arr[j]);

}

for (int i = 1; i < n; i++)
{
    int key = arr[i]; // key --> second element
    int j = i -1; // another variable for comparision (left)

    // shift element to right if they are greter than key.

    while (j >= 0 && arr[j] > key)  // compare key (2nd element and to right side (0- 5))
    {
        arr[j + 1] = arr[j]; // Change place of 2nd element to right side 

        j--; // Move left

    }
    arr[j+1] = key; // insert element at that position.

}

printf("sorted array: ");
for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}
printf("\n");

    return 0;
}