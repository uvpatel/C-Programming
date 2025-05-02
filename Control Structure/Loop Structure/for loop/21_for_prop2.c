#include <stdio.h>

int main(){
    
    // case 1: infinite loop - no condition

    int i,j;
    for ( i = 0; ; i++)
    {
        printf("\ni = %d,j = %d",i,j);
    }
    printf("\n The value of i after for loop is %d and j is %d",i,j);


    // case 2: Infinite loop - Two condition in for loop, loop will execute until second becomes false (j < 4)

    int k,l;
    for (int k = 0,j = 1; k <= 4 ; k++)
    {
        printf("\ni = %d, j = %d",i,j);
    }
    printf("\n The value of i after for loop is %d and j is %d",i,j);


//     --expression-2—
// Case:3 if logical operators are there then it is considered as a one condition and terminated when
// both individually become false 


    int m,n;
    for ( m = 0,n = 1; m < 100 || n < 3; m++,n++)
    {
        printf("\nm = %d,n= %d",m,n);
    }
   
    // Case:4 in condition, assignment operator

    int a,b;
    for ( a = 0,b = 1; a == 10; a++,b++)
    {
        printf("\na = %d, b = %d",a,b);
    }
    printf("\n The value of a after for loop is %d and b is %d",a,b);
    
    //Case:5 in condition, 0 – treated as false, else will treated as true , false will not execute loop body, while true condition must be break! 
    
    int c,d;
    for ( c = 0,d = 1; 0; c++,d++)
    {
        printf("\nc = %d, d = %d",c,d);
    }
    printf("\n The value of c after for loop is %d and d is %d",c,d);
    
    int e,f;
    for ( e = 0,d = 1; 1 ; e++,f++)
    {
        printf("\ne = %d, d = %d",c,f);
    }
    printf("\n The value of e after for loop is %d and f is %d",e,f);

    // this is an infinite loop because of 1 it seems to be condition become always true.  and any non zero treted as a true.


    // --expression -3-
    // Case:1 More than one incremental/decremental

    int g,h;
    for (g = 0,h = 1; g <=100,h<4; g++,h++)
    {
        printf("\ng = %d, h = %d",g,h);
    }
    printf("\n The value of g after for loop is %d and h is %d",g,h);

    /*
    ;
Case: for();
For();
→ empty loop &
Body will be executed once
after for statement. 
*/

for (int o = 0; o < 5; o++); // loop will never executed. 
{
    printf("hello");
}

/*
;
Case: for();
For();
→ empty loop &
Body will be executed once
after for statement. 

*/

for (int x = 0; x < 10; x++)
    printf("The value of x is: %d",x); // output 10


/*
--expression
-
3
—
Case: infinite loop
*/

// int v,z;
// for (;;)
// {
//     printf("hello");
// } // this is an infinite loop



    return 0;
}