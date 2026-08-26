#include <stdio.h>

int main()
{
    int a, b, x, count = 0;

    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);

    x = a ^ b;

    while (x != 0)
    {
        if (x % 2 == 1)
            count++;

        x = x / 2;
    }

    printf("Number of bits to change = %d", count);

    return 0;
}
