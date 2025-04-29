#include <stdio.h>

void sum();  // Function Prototype

int main(){
    sum();
    return 0;
}

void sum(){
    int a,b;
    printf("enter number a & b: ");
    scanf("%d %d",&a,&b);

    printf("The sum of a & b is : %d",a+b);

}