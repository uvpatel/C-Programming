#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You can't vote.\n");
    } 
    else if (age >= 18 ) {
        printf("You can vote.\n");
    }
    else {
        printf("Invalid Input\n");
    }
    
    
    return 0;
}