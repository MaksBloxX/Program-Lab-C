#include <stdio.h>

int main()
{
    int n, i, sum = 0, sign = 1;

    printf("Enter the last odd number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + sign * i * i;
        sign = -sign;
    }

    printf("Sum = %d", sum);

    return 0;
}
