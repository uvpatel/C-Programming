#include <stdio.h>
#include <string.h>


int main(){
    char alaphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

    printf("%s",alaphabet);
    printf("The size of function will return byte taken by string including null character: \n%d",sizeof(alaphabet));

    printf("The strlen will retyrn len of string without null character \n%d",strlen(alaphabet));

    
    return 0;
}