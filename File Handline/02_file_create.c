#include <stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp  = fopen("uvpatel.txt","w");
    if (fp == NULL)     
    {
        printf("Failed to create a file.");

    }
    else{
        printf("File is successfully created.");
        }
    return 0;
}