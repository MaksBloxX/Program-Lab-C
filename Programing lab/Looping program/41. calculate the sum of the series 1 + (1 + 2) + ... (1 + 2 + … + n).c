#include <stdio.h>

int main()
{
    int n, i, j, sum = 0, total = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = 0;

        for (j = 1; j <= i; j++)
        {
            sum = sum + j;
        }

        total = total + sum;
    }

    printf("Sum of the series = %d\n", total);

    return 0;
}