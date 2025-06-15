#include <stdio.h>
#include <math.h>
int main(){
    // Iteration are optinal i Make this programme generalise. so user can decide how many times they want to calculate.

    int iterations;
    printf("Enter the number of iterations: ");
    scanf("%d", &iterations);
    for (int i = 0; i < iterations; i++)
    {
        
        // Print cube main logic.
        float num,cube;
        printf("Enter the number plate: ");
        scanf("%f", &num);
        cube = pow(num,3);
        
        printf("The cube of the number is: %f\n", cube);
    }

    return 0;
}