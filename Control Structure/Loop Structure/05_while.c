#include <stdio.h>

int main(){
    int i = -1;
    while (i)
    {
        printf("%d",i);
        i++;


    }
    /*
    
        Not an infinite loop,
        Not every time I will be
        incremented but it will stop at 0
        It remove i++ it will infinite loop
*/
    return 0;
}