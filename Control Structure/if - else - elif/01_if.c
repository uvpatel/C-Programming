#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    if (a > b) {
        printf("The num1 is greter than num2 ");
    } else if (a < b) {
        printf("The num2 is greter than num1 ");
    } else if (a == b) {
        printf("Both numbers are equal ");
    } else
    {
        printf("Invalid input ");
    }
    
    
    return 0;
}