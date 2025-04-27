#include <stdio.h>

int main(){


    /*
    
    Restaurant ordering system
:
▪ Two variables category
& food
choice
.
▪ Category stores two item fast
food and beverages
. (Use switch
case for this
2
)
▪ Food choice
: pizza
, burger (use
switch case for this choice)
▪ Beverage's choice
: coffee, cold
drinks(use switch case for this)

*/
    int choice,beverageType;
    printf("Restaurant Menu: \n");
    printf("1. Burger\n 2. Beverage \n");
    printf("Enter your choice(1-3): ");

    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You ordered a Burger.Preparing your order...\n");

        break;
    case 2:
        printf("Choose Beverage Type:\n");
        printf("1. Hot Coffee\n");
        printf("2. Cold Juice\n");
        printf("Enter your choice (1-2): ");
        scanf("%d",&beverageType);

        if (beverageType == 1)
        {
            printf("Serving a Hot Coffee.\n");
        }
        else if (beverageType == 2)
        {
            printf("Searving a Cold Juice.\n");
        }
       else{
        printf("Invalid choice! Serving water instead.\n");
       } 

    default:
       printf("Invalid selection! please choose a valid menu item.\n");
       break;
    }
    return 0;
}