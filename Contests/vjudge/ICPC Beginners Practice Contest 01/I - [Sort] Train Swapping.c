#include <stdio.h>

int main()
{
    int t, l, i, j, k, temp, count, arr[100];

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d", &l);

        count = 0;

        for(j = 0; j < l; j++)
        {
            scanf("%d", &arr[j]);
        }

        for(k = 0; k < l - 1; k++)
        {
            for(j = 0; j < l - 1 - k; j++)
            {
                if(arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    count++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", count);
    }

    return 0;
}
