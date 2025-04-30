#include <stdio.h>

int main(){
    int a = 5;
    char c = 'A';
    void *p = &a;
    printf("%d",*(int *)p);


    p = &c;

    printf("\n %c",*(char *)p);

    return 0;
}