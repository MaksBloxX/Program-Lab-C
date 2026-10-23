#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d", gcd(a, b));

    return 0;
}

/* Another version of code

for (i = 1; i <= a && i <= b; i++)
{
if (a % i == 0 && b % i == 0)
gcd = i;
}

*/
