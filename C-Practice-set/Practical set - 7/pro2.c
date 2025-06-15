#include <stdio.h>

int main(){
    int customerNumber;
    printf("Enter Number of Customer: ");
    scanf("%d",&customerNumber);
    int CustomerID[customerNumber];  // Store CustomersID





    // Input Customer's ID and store it.

    for (int i = 0; i < customerNumber; i++)
    {
        printf("Enter CustomerID id: ");
        scanf("%d",&CustomerID[i]);
    }
    
    int cancel_Res;
    printf("Enter number How many ID's Cancel: ");
    scanf("%d",&cancel_Res);
    
    
    for (int j = 0; j < cancel_Res; j++)
    {
        
        // Cancel Reservation
        int CancelID;
        printf("Enter The ID at Index, You want to Cancel reservation: ",j);
        scanf("%d",&CancelID);
        
        
        for (int i = 0; i < customerNumber; i++)
        {
            CustomerID[i-1] = CustomerID[i];
        }
        customerNumber--;
      
        
    }
    printf("\n\nThe Waiting list is given below you can check it :");


    for (int j = 0; j < customerNumber; j++)
    {
        
        printf("[ %d ] ",CustomerID[j]);
    }
    

    return 0;
}