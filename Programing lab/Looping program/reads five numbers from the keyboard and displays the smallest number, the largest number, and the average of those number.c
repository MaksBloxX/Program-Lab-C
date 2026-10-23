#include <stdio.h>

int main()
{
    int num, min, max, i, sum = 0;
    float average;

    printf("Enter number 1: ");
    scanf("%d", &num);

    min = max = num;
    sum = num;

    for (i = 2; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;

        if (num > max)
            max = num;

        if (num < min)
            min = num;
    }

    average = (float)sum / 5;

    printf("Smallest Number = %d\n", min);
    printf("Largest Number = %d\n", max);
    printf("Average = %.2f\n", average);

    return 0;
}
