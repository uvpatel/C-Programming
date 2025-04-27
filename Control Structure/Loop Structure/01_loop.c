#include <stdio.h>

int main(){
    /*
    in Programming we there is a certain step which is repeted in programming we use loop 
    for solving that perticular problem using loop.
    
    Type of loops: 
    1) while
    2) for
    3)  do while

    there are syntax is diffrent but we solve any problem using any loop. but i suggest some points when to use which loop:


    1) if we don't know iteration and we want the loop run untill condition is true. while loop should be use.

    2) if we know the iteration use for loop. like dynamic programming and pettern problem easy to solve with the for loop.

    3) Condition does't metter once loop should be execute that type of case use. do while loop.

    */

    // while syntax: 
    int n = 5, i = 1;

    while (i < n)
    {
        printf("Hello");
        i++;
    }
    
    do
    {
        printf("Hello");
        
    } while (i < n);
    
    for (int i = 0; i < n; i++)
    {
        printf("hello");
    }
    
    return 0;
}