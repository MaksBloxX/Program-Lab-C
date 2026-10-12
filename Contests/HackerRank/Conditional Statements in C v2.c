#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    char *str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if (N >= 1 && N <= 9)
    {
        printf("%s\n", str[N - 1]);
    }
    else
    {
        printf("Greater than 9\n");
    }

    return 0;
}