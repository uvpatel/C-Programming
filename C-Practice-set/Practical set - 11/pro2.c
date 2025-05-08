#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *ptr, sum = 0;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc
    ptr = (float *)calloc(n, sizeof(float));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with error
    }

    // Input elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &ptr[i]);
        sum += ptr[i];
    }

    // Display the sum
    printf("Sum of the elements = %.2f\n", sum);

    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}
