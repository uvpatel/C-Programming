#include <stdio.h>
#include<string.h>

int main(){
    char src[] = "Hello World";
    char dest[10];
    strncpy(dest,src,7);
    dest[7] = '\0' ;
    printf("The dest is: %s",dest);
    //output : Hello W 

    /* strncpy return string from index 0 to destination index on the str on given destination */
    return 0;
}