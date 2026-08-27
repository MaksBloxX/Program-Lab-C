#include <stdio.h>

int main()
{
    int num = 2, count = 0, i, prime;

    while (count < 100)
    {
        prime = 1;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    return 0;
}
