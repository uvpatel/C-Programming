#include <stdio.h>

enum week
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
} w;
int main()
{   
    printf("Enter the day: ");
    scanf("%d",&w);

    switch (w)
    {
    case sunday:
        printf("Holiday");
        
        break;
    case monday:
        printf("Working Day");

        break;
    case tuesday:
        printf("Tuesday");

        break;
    case wednesday:
        printf("Early Free");

        break;
    case thursday:
        printf("Thursday");

        break;
    case friday:
        printf("Friday");

        break;
    
    case saturday:
        printf("Saturday");

        break;
    
    default:
        printf("error");
        break;
    }
     return 0;
}