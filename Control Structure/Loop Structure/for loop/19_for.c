#include <stdio.h>

int main(){
    /*
    
    
    For Loop 49
In
a for loop there are
3
expressions
expression
-
1 is used to
initialize some variable (called
index) that controls the loop
.
Expression
-
2 is represent the
condition that must be true
for the loop to continue
Third expression used to alter
the value of index initially
assigned by expression
-
1
*/
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    int i;
    for (i = 0; i < n; i++)
    {
        printf("i = %d\n",i);

    }
    
    printf("The value of i after for loop is %d",i);
    return 0;
}