#include <stdio.h>

int main(){
    /*
    The precedence of operators determines the order in which they are evaluated in an
expression. Operators with higher precedence are evaluated first
*/
    int a = 5;
    int b = 10;
    int c = 4;
    int d = 8;

    int e = a + b * c /d;
    printf("The value of e is %d",e);

    

    return 0;
}