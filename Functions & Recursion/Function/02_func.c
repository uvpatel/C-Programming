#include <stdio.h>


// Void Function Example: 
void display(); // Function Declaration

void display(){    // Function Defination
    printf("Hello World\n");  
}

// int Function Example: 

int rem(int n,int m);  // Function Declaration

int rem(int n,int m){    // Function Defination
    int remainder = n%m;
    return remainder;
}

// Main Function: 
int main(){
    display();   // Function call without Arguments.
    int s = rem(10,5);   // Function call with Arguments.
    printf("The value of s is : %d",s);
    return 0;
}