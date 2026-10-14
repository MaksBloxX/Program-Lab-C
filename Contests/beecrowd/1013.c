#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d eh o maior\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d eh o maior\n", b);
    }
    else
    {
        printf("%d eh o maior\n", c);
    }

    return 0;
}

// New Problem: 1013 - The Greatest
/* a>b && a>c eita hobe but problem ta holo a=7, b=7, c=3. In this case, a is not greater than b, but they are equal. So we need to use >= instead of > to handle the case when two numbers are equal.
*/