#include <stdio.h>

int main(){
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("0 is not a digit\n");
    }
    do
    {
        number /= 10;
        digit++;
    } while (number!= 0); // posttest loop
    
    
    printf("the number of digit: %d",digit);

    
    return 0;
}