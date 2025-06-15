#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int fact = 1;

    // for number 0 . factorial 1
    for (int i = 1; i <= number; i++) {
        fact *= i; // Calculate factorial
    }
    printf("Factorial of %d is: %d\number", number, fact);
    
    // complexity O(n)
    // Don’t use recursion for large n — may cause stack overflow.
    //  Your loop-based approach is best for performance and safety in C.
    return 0;
}