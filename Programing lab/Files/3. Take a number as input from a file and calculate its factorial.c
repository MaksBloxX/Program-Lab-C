#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    long long factorial = 1;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open 'input.txt'. Make sure the file exists!\n");
        return 1; 
    }

    if (fscanf(fp, "%d", &n) == 1) {
        
        if (n < 0) {
            printf("Error: Factorial of a negative number (%d) is undefined.\n", n);
        } 
        else if (n > 20) {
            printf("Error: %d is too large! Maximum supported input is 20.\n", n);
        } 
        else {
            for(i = 1; i <= n; i++) {
                factorial = factorial * i;
            }
            printf("Factorial of %d = %lld\n", n, factorial);
        }
        
    } 
    else {
        printf("Error: Could not read a valid integer from 'input.txt'.\n");
    }

    fclose(fp);
    return 0;
}
