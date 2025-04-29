#include <stdio.h>

int main()
{
    /*
    String→ char array with null character in the end
Placeholder for printf scanf→ %s

Scanf → do not use & → when we call scanf with string variable, array always strat from
initial value.

*/

    char str[] = "Hello Programming";
    printf("%s",str);
    
    return 0;
}