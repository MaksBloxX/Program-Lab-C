#include <stdio.h>

int main() {
    int a,b,c;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3.0;
    printf("The average is: %.2f\n", average);
    return 0;
}