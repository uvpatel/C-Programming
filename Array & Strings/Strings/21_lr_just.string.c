#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hello World";
    printf("%20s\n",str);
    printf("%20s\n",str);
    
    //user input

    char clgname[50];
    printf("Enter your clg name: ");
    scanf("%s" ,clgname);
    printf("Hello, %s!\n",clgname);
    
    /*clgname automatically points
    to &clgname[0], so scanf()
    already knows where to store
    input.*/
    
    
    //string -Handle space [^\n]
    
    /*Read a string containing any character*/
    
    printf("Enter your clg name: ");
    scanf("%[^n]s" ,clgname);
    printf("Hello, %s!\n",clgname);

    return 0;
}