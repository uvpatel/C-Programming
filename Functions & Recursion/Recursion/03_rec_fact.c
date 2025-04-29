#include <stdio.h>

int fact(int n);

int fact(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    fact(n);


    return 0;
}

/*Recursion Explination: 

The first call to the function fact() lies at the bottom of the stack.

This is also the function that will return at the very end.


 ----------------
| fact(5) <- Top |
------------------
fact(5) function calls another instance of the same function.but the time target - 1 is passed to the function i.e. fact(4)

------------------
| fact(4) <- Top |
------------------
------------------
| fact(5)        |
------------------



Recusion Fact Example:

Each time a function calls another  instance of the function it is pushed at the top of the stack.

------------------
| fact(1) <- Top |
------------------
------------------
| fact(2)        |
------------------
------------------
| fact(3)        |
------------------
------------------
| fact(4)        |
------------------
------------------
| fact(5)        |
------------------

From here onwardsm i.e. after fact(1) is called their will be no further function call insted the base is satisfied and the functions returns 1.


Each function will now return its respective value.

This is the beauty of recursion. 

Each child functions call returns result to its parent function. in the end the result is accumulated and returned. 

*/