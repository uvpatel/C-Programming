#include <stdio.h>

int main(){
    /*Menu: 
    panipuri , Sandwich, Vadapav,Pavbhaji,Dosa*/

    int choice;
    float bill;
    printf("Enter Your Choice Food( panipuri - 1  , Sandwich - 2, Vadapav - 3 ,Pavbhaji - 4,Dosa - 5): ");
    scanf("%d",&choice);
    
    
    switch (choice)
    {
        case 1:
        printf("Your Choice is Panipuri. Great Choice.");
        printf("The Price of the Pani-Puri 40 Ruppes.");
        bill += 40;

        // int order;
        // printf("Do You like to order anything else. From Manu.");
        // scanf("%d",&order);
        // printf("Enter Your Choice Food( panipuri - 1  , Sandwich - 2, Vadapav - 3 ,Pavbhaji - 4,Dosa - 5): ");
        // scanf("%d",&choice);
        // bill += 

        // if (order == 0)
        // {
        //     printf("What whould you like to have: ");

        // }
        // else{
        //     printf("Thank you sir");
        // }
        // break;



        
        case 2:
        printf("Your Choice is Sandwich. Great Choice.");
        printf("The Price of the Sandwich 80 Ruppes.");
        bill += 80;
        break;

        case 3:
        printf("Your Choice is VadaPav. Great Choice.");
        printf("The Price of the Sandwich 20 Ruppes.");
        bill += 20;
        break;

        case 4:
        printf("Your Choice is Pav-Bhaji. Great Choice.");
        printf("The Price of the Pav-Bhaji 100 Ruppes.");
        bill += 100;
        break;


        case 5:
        printf("Your Choice is Dosa. Great Choice.");
        printf("The Price of the Dosa 120 Ruppes.");
        bill += 120;
        break;

        
        
     default:
        printf("Given Ordered Item is not available.");
        break;

        
    }

    printf("The Final Price is %f",bill);

    // From this programme you are able to know Application of Switch Case it is prefered when you perform on some specific task like on which day of week . i will go to college or not? this kind of problem in which you know Parameters.use switch case over if else.
    
    return 0;
}