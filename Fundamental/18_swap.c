#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two num: ");
    scanf("%d %d", &a, &b);

    printf("The value of before swaping a = %d and b = %d", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("The value of after swaping a = %d and b = %d", a, b);

    return 0;
}