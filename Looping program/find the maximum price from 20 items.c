#include <stdio.h>

int main()
{
    int price, max, i;

    printf("Enter price of item 1: ");
    scanf("%d", &max);

    for (i = 2; i <= 20; i++)
    {
        printf("Enter price of item %d: ", i);
        scanf("%d", &price);

        if (price > max)
        {
            max = price;
        }
    }

    printf("Maximum price = %d", max);

    return 0;
}