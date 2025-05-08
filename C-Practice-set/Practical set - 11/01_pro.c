#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,sum = 0;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the elements = %d\n", sum);
    printf("Average of the elements = %.2f\n", (float)sum/n);


    free(arr); // Free the allocated memory



    return 0;
}