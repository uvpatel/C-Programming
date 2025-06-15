#include <stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;  //file pointer. File is hidden structure we use file pointer for accessing the details.

    char c;
    fp  = fopen("write.txt","r");
    if (fp == NULL)     
    {
        printf("Failed to create a file.");
        exit(1);

    }
    while (fp != EOF)
    {
        c = fgetc(fp);
        printf("%c",c);

    }
    fclose(fp);
    return 0;
}