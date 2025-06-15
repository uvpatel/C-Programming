#include <stdio.h>

int main(){

    // Declaration
    float celsius, fahrenheit;

    // input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // output
    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}