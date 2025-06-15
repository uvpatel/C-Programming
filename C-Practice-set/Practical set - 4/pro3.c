#include <stdio.h>

int main(){
    // Amount and PIN - Actual PIN
    int PIN,Amount = 10000;
    printf("Enter your Real PIN: ");
    scanf("%d", &PIN);

    // User Input PIN
    int entered_PIN;
    printf("Enter your PIN: ");
    scanf("%d", &entered_PIN);

    // Check whether PIN is right or not.
    if (PIN == entered_PIN) {

        printf("PIN is correct.\n");
        
        // It is shows Balance.
        printf("Your account balance is: %d\n", Amount);
       
        // Enter Amount 
        int withdraw_amount;
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &withdraw_amount);
        
        // Checking the Withdrawl Balance is whether it is a sufficient or not.

        if (Amount >= withdraw_amount) {
            
            printf("Withdrawal successful.\n");
            Amount -= withdraw_amount;
            printf("Withdrawal successful. New balance: %d\n", Amount);
        } else {
            printf("Insufficient funds.\n");
        }
        
        
    } else {
        printf("PIN is incorrect.\n");
    }
    printf("You can access your account.\n");


    // From This Programme you able to understand nested Conditional Statements.
    
    return 0;
}