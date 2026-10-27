#include <stdio.h>

int main()
{
    int n, i, x, balance, cas = 0;

    while(scanf("%d", &n) == 1 && n != 0)
    {
        balance = 0;
        cas++;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);

            if(x == 0)
                balance--;
            else
                balance++;
        }

        printf("Case %d: %d\n", cas, balance);
    }

    return 0;
}
