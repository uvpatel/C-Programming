#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);


    int max = (num1 > num2 ?printf("The num1 is greter than num2 ") : printf("The num2 is greter than num1 "));
    int min = (num1 < num2 ?printf("The num1 is smaller than num2 ") : printf("The num2 is smaller than num1 "));

    return 0;
}