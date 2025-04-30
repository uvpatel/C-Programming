#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt","w");

    fputs("Hello World",fp);

    fseek(fp,2,SEEK_SET);
    printf("1. The size of the specified file is %d bytes\n",ftell(fp));
    fseek(fp,2,SEEK_CUR);
    printf("2. The size of the specified file is %d bytes\n",ftell(fp));
    fseek(fp,2,SEEK_END);
    
    printf("3. The size of the specified file is %d bytes\n",ftell(fp));
    fclose(fp);
    return 0;
}