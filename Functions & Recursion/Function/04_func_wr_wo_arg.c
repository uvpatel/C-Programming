#include <stdio.h>

int sum();
int main(){
    int s = sum();
    printf("%d" ,s);
    return 0;
}
int sum(){
    int a,b,sum;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    sum = a + b;

    return sum;

}