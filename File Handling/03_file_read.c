#include <stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char c;
    fp = fopen("write.txt","r");
    if (fp == NULL)     
    {
        printf("Failed to read a file.");
        exit(1);

    }
    do
    {
        c = fgetc(fp);
        printf("%c",c);
    
    } while (c != EOF);
    
     fclose(fp);
    return 0;
}