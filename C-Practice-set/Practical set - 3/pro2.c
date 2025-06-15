#include <stdio.h>

int main(){
    // This programme is give you understanding of operator associtivity and precedence.

    // associativity - where to execution start -> right to left or left to right.

    // precedence which operation will be first perform.

    // input
    int x,y,z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // perform tasks.

    // A. x + y * z

    printf("A. x + y * z = %d\n", x + y * z);
    // (x + y) * z
    printf("A. x + y * z = %d\n", (x + y) * z);
    // x + y % z
    printf("A. x + y * z = %d\n", x + y % z);
    // x*y / z
    printf("A. x + y * z = %d\n", x * y / z);

    // x == y || z> y
    printf("A. x + y * z = %d\n", x == y || z > y);


    
    return 0;
}