#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / (i * i);
    }

    printf("Sum = %.4f\n", sum);

    return 0;
}