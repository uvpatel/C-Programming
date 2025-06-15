#include <stdio.h>

int main(){
    // Swaping

    // 1) Using temp variable. (Naive Approach)
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("before swapping: x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);
    




    // 2) Prefered approach

    // a = a ^ b
    // b = a ^ b
    // a = a ^ b

    
    return 0;
}