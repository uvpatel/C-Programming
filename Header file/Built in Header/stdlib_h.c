// 2. stdlib.h (Standard Library) 
// Use: Memory allocation (malloc, calloc), conversions (atoi, atof), process control (exit())

#include <stdlib.h>
#include <stdio.h>

int main() {
    int *arr = malloc(5 * sizeof(int));  // dynamic memory
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Memory allocated!\n");
    free(arr);  // free memory
    return 0;
}
