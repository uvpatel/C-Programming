#include <stdio.h>

int main(){
    int a = 2147483647; // Maximum value for a 32-bit signed integer
    int b = 2147483649; // This is intentionally larger than the max value
    printf("a = %d\n", a);
    printf("b = %d\n", b); // this will give output -2147483647, but it is not correct as it is larger than the max value of int
    return 0;
}