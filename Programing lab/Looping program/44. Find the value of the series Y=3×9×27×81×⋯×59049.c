#include <stdio.h>

int main()
{
    int i, term = 3;
    long long Y = 1;

    while (term <= 59049)
    {
        Y = Y * term;
        term = term * 3;
    }

    printf("Y = %lld\n", Y);

    return 0;
}