#include <stdio.h>

int main(){
    int correct_pin = 1234;
    int pin_entered;
    printf("enter pin: ");
    scanf("%d",&pin_entered);

    if (correct_pin == pin_entered)
    {
        int balance = 5000;
        int withdraw;
        printf("enter withdrawal amount: ");
        scanf("%d",&withdraw);
        if (withdraw <= balance)
        {
            printf("Successful transistion");
            printf("The remaining balance: %d",balance -withdraw);

        }
        else{
            printf("Not enough balance");
        }
        
    }
    else{
        printf("Invalid PIN enter correct pin");
    }
    
    return 0;
}