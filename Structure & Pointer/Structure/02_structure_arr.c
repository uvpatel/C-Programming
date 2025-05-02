#include <stdio.h>

struct student
{
    int roll_no;
    char name[100];
    float cgpa;
};

int main(){
    struct student IT[100];
    struct student CP[100];
    struct student ECE[100];
    
    printf("Enter the details about student from IT: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d \n %s \n %f",&IT[i].roll_no,&IT[i].name,&IT[i].cgpa);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d \n %s \n %f",IT[i].roll_no,IT[i].name,IT[i].cgpa);
    }
    
    
    return 0;
}