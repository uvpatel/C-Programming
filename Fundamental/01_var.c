#include <stdio.h>
#include <stdbool.h>

struct structure
{
    int a;
    char c;
    float f;
};

int main(){


    /*
    variable is like container which store items, and values are changeable.

    1)Primary data type : int, float , char.

    2)derived data type: string, array , pointer, function.

    3) User defined data type: Structure and Union.
    */
    int age= 32;  // integer value
    float decimal = 10.5;   // decimal number is display with . it is floating point number
    char character = 'A'; // generally denoted in Single queates
    
    
    bool boolian = 1; // 1 True and 0 false

    // Array is a collection of similar data type.

    int arr[] = {1,2,3};
    // int str[5] = "hello"; //string in c there is no by defualt string so we use character array for strings.

    int float_arr[] = {1.2,2.2};

    // derived data type: sturcture, union , enum

    
   struct structure s1 = {
     5,'a',  5.5
   };
    
//    printf("The value of int a is %d",s1.a);
    

    return 0;
}