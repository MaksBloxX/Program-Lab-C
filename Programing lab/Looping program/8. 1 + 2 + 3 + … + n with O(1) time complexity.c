#include <stdio.h>

int main() {
    long long n, sum;
    
    printf("Enter n: ");
    scanf("%lld", &n);

    sum = n * (n + 1) / 2;  // O(1) time complexity = n(n+1)/2
                            // This is only Data structure and Algorithm (DSA) lesson.
    printf("Sum = %lld\n", sum);

    return 0;

}
