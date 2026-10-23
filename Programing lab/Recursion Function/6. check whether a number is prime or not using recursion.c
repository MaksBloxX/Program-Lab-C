#include <stdio.h>

int isPrime(int n, int i)
{
    if (n <= 1)
        return 0;

    if (i == 1)
        return 1;

    if (n % i == 0)
        return 0;

    return isPrime(n, i - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n, n / 2))
        printf("%d is a Prime Number.", n);
    else
        printf("%d is Not a Prime Number.", n);

    return 0;
}

/*Another version of code

if (n <= 1)
prime = 0;

for (i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
prime = 0;
break;
}
}

*/
