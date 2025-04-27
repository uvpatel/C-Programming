#include <stdio.h>
#include <ctype.h>



int main(){
    char c = 'a';
    printf("Convert it into upper: %c",toupper(c)); // convert to uppercase
    printf("Is digit? %d\n",isdigit(c));  //Checks if a character is a digit.

    return 0;
}