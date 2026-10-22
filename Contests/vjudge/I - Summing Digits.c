#include <stdio.h>

int main()
{
    int n, sum, a, b;
    
    while(scanf("%d", &n) == 1 && n != 0){
        while(n > 2){
            a = n % 10;
            b = n / 10;
            sum = a + b;
            n = sum;
        }
        printf("%d\n", n);
    }
    return 0;
}