#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T, A, B, C, D, E;
    int count = 0;

    if (scanf("%d", &T) != 1) return 0;
    if (scanf("%d %d %d %d %d", &A, &B, &C, &D, &E) != 5) return 0;

    if (T == A) { count++; }
    if (T == B) { count++; }
    if (T == C) { count++; }
    if (T == D) { count++; }
    if (T == E) { count++; }
    
    printf("%d", count);
    
    return 0;
}
