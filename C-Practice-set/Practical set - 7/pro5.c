#include <stdio.h>

int main()
{

   
    // Months - Rows and Department - 2

    float Sells_Department_1[30][2];
    float Sells_Department_2[30][2];
    float total_sales;

    

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("Enter Sell1 Price: ");
            scanf("%f", &Sells_Department_1[i][j]);

            printf("Enter Sell2 Price: ");
            scanf("%f", &Sells_Department_2[i][j]);

            total_sales += Sells_Department_1[i][j] + Sells_Department_2[i][j];
        }
    }

    // Printing Final Output. Total_Sales
    printf("\nTotal Sales of both departments in 30 days across 2 regions: %.2f\n", total_sales);

    return 0;
}