#include <stdio.h>

int main(){
    int x = 5;

    // if (0 <=x <=4)
    // {
    //     printf("condition is true");
    // }
    if (0 <= x || x <=4)
    {
        printf("condition is true");
    }
    
    else{
        printf("condition is false");
    }
    return 0;
}