#include <stdio.h>

int main()
{
    int n, a, sum;
    
    while(scanf("%d", &n) == 1 && n != 0){
        sum = 0;
        while(n > 0){
            a = n % 10;
            sum = sum + a;
            n = n / 10;
        }
        while(sum >= 10){
            n = sum;
            sum = 0;
            while(n > 0){
                a = n % 10;
                sum = sum + a;
                n = n / 10;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}