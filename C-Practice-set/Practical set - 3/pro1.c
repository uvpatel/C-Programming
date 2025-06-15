#include <stdio.h>

// This library is for performing Mathematical Task.
#include <math.h>


int main(){
    // input
    int x;

    // Equation
    int equation = 3*(pow(x,3) + 2*pow(x,2) - 5*x + 1);
   
    printf("Enter the value of x: ");
    scanf("%d", &x);


    // output.
    printf("The value of the equation is: %d",equation);

    return 0;
}