#include <stdio.h>

void sum(int,int);

void sum(int a,int b){
    printf("The sum of a & b is: %d ",a+b);
}
int main(){
    int a,b;
    printf("Enter a & b: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}