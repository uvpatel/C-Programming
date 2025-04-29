#include <stdio.h>

int chocolateWar(int X, int Y);

int chocolateWar(int X, int Y)
{
    if (X == 0 || Y == 0 || X = Y)
    {
        return X + Y;
    }
    return ((X > Y) ? chocolateWar(X - Y, Y) : chocolateWar(X, Y - X));
}
int main()
{
    int X, Y;
    printf("Enter chocolates for Melidas(x) and Ban(Y): ");

    scanf("%d %d", &X, &Y);
    return 0;
}