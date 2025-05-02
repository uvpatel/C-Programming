#include <stdio.h>

/*

Cause immediate exit from
the switch , while, do while
and for loop

Common uses:
Escape early form the loop,
in a switch statement .

*/
int main(){
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // skips printing 5

        }
        if (i == 8)
        {
            break; // stop the loop when i = 0
        }
        
        printf("%d ",i);
    }
    
    return 0;
}   