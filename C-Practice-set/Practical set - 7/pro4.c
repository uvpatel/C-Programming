#include <stdio.h>

int main(){
    int StudentAttendence[3][5]; // 3 - Student (row), 5 -(Day) Coloumn.

    // Input StudentAttendence Student 
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter Daywise Student: ");
            scanf("%d",&StudentAttendence[i][j]);
        }
        
    }
    
    return 0;
}