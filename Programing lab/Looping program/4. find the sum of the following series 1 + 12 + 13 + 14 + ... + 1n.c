// Program to find the sum of the series 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }

    printf("Sum = %.2f", sum);

    return 0;
}