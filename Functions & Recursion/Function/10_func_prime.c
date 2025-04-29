#include <stdio.h>

int isPrime(int num);
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }

    return 0;
}
int isPrime(int num){
    if (num < 2)
    {
        return 0;
    }
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            return 0; // Found a divisor, not prime
        }
        return 1; // To divisors found,number is prime
    }
}