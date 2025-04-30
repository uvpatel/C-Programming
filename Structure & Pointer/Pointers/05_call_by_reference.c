#include <stdio.h>

void func1(int *,int *);

int main(){
    int a = 10;
    int b = 20;
    func1(&a,&b);
    printf("Valueof a is %d and b is %d\n",a,b);

    return 0;
}

void func1(int *a,int *b){
    *a = 12;
    *b = 12;
    printf("Valueof a is %d and b is %d\n",a,b);
}