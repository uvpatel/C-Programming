#include <stdio.h>

int sum(int,int);
int main(){
    int s,a,b;
    printf("Enter a&b: ");
    scanf("%d %d",&a,&b);
    s = sum(a,b);
    printf("The sum is %d",s);
    return 0;
}

int sum(int a,int b){
    return a+b;
}