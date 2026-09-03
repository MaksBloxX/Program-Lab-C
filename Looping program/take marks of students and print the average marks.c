#include <stdio.h>

int main()
{
    int n, i;
    float marks, sum = 0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter marks of student %d: ", i);
        scanf("%f", &marks);

        sum = sum + marks;
    }

    average = sum / n;

    printf("Average marks = %.2f", average);

    return 0;
}