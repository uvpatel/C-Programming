#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;  
    char ch;
    float f;
    double d;
    short s;
    long l;
    bool b;

    // These are depend on your machine, compiler so it can be diffrent for each system.
    printf("Size of int: %zu bytes\n", sizeof(x));  // 4 Bytes
    printf("Size of char: %zu bytes\n", sizeof(ch)); // 1 Bytes
    printf("Size of float: %zu bytes\n", sizeof(f)); // 4 Bytes
    printf("Size of double: %zu bytes\n", sizeof(d)); // 8 Bytes
    printf("Size of short: %zu bytes\n", sizeof(s)); // 2 Bytes
    printf("Size of long: %zu bytes\n", sizeof(l));  // 8 Bytes or 4 Bytes it is depend on system.some time
    printf("Size of bool: %zu bytes\n", sizeof(b));  // 1 Byte
    

    return 0;
}