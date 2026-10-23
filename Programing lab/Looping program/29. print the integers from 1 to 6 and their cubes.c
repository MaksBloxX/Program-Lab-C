#include <stdio.h>

int main()
{
    int i;

    printf("Number\tCube\n");

    for (i = 1; i <= 6; i++)
    {
        printf("%d\t%d\n", i, i * i * i);
    }

    return 0;
}
