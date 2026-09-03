#include <stdio.h>

int main()
{
    int a = 1, i;

    printf("Sequence: ");

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", a);

        if (i % 2 != 0)
            a = a * 2;
        else
            a = a * 3;
    }

    return 0;
}
