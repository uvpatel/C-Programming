#include <stdio.h>

int main(){
    int x = 3;  //0011
    int y = 6;   //1010

    // A typical use of &&
    if (y > 1 && y > x)
    {
        printf("y is greter than 1 &&(AND) x");
    }
    int z = x & y;

    printf(" using & z = %d",z);

    return 0;
}