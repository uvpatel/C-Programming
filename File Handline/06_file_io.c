#include <stdio.h>

int main(){
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("File_io.txt","w");

    fprintf(fp, "%s %d","Urvil",18);
    
    fclose(fp);

    fp = fopen("File_io.txt","r");

    fscanf(fp, "%s %d", name,&age);

    fclose(fp);

    printf("Hello %s, you are %d years old\n",name,age);
    return 0;
}