#include <stdio.h>

int main()
{
    int x, y, i, power = 1;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter exponent: ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++)
    {
        power = power * x;
    }

    printf("Power = %d", power);

    return 0;
}