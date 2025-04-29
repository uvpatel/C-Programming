#include <stdio.h>
#include<string.h>
void display(char ch[]);

int main(){
    char str[100];

    display(str);
    return 0;
}

void display(char ch[]){
    printf("Enter the string: ");
    gets(ch);
    puts(ch);
}
