#include <stdio.h>

int main()
{
    int grade;
    printf("Enter Grade: ");
    scanf("%d", &grade);

    int score = grade / 10;

    switch (score)
    {
    case 9:
        printf("You got A");
        break;
    case 8:
        printf("You got B");
        break;
    case 7:
        printf("You got C");
        break;

    default:
        printf("You got D");
        break;
    }
    return 0;
}