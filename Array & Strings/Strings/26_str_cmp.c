#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[] = "Hello";
    char b[] = "Hello";
    char c[] = "hi";

    /*
    if both are eqal return 0
    if first's ascii more than second string return 1 
    if second's ascii more than first string return -1 
    */
    printf("The compared string is: %d\n",strcmp(a,b));
    printf("The compared string is: %d",strcmp(a,c));
    printf("The compared string is: %d",strcmp(c,a));
    
    return 0;
}