#include <stdio.h>

int main(){
    int grade ;
    printf("Enter grade: ");
    scanf("%d",&grade);
    if (grade >= 90)
    {
        printf("you got an A");
    }
    else if (grade >= 80)
    {
        printf("You got a B");
    }
    else if (grade >= 70)
    {
        printf("You got a B");
    }
    else{
        printf("You need to study more");
    }
    
    return 0;
}