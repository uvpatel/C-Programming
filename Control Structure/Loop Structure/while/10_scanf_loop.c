#include <stdio.h>

int main(){
    int num;
    printf("Enter number: ");

    while (scanf("%d" ,&num) && num != 0)
    {
        printf("You entered: %d\n",num);
    }
    
    printf("Loop ended.\n");

    return 0;
}