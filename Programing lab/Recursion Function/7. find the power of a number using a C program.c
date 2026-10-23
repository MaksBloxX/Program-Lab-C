#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

int main()
{
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &exp);

    printf("Result = %d", power(base, exp));

    return 0;
}

/*Another version of code

for (i = 1; i <= power; i++)
{
result = result * base;
}

*/