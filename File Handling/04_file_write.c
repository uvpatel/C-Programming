#include <stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;char c;

    fp = fopen("write.txt","r");
    if (fp == NULL)
    {
        printf("Failed to create a file");
        exit(1);
    }
    fputs("Hello Engineering!",fp);

    do
    {
        c = fgetc(fp);
        printf("%c",c);
    } while (c != EOF);
    
    fclose(fp);
    return 0;
}