#include <stdio.h>

int main()
{
    int T,A;
    double L;
    
    scanf("%d",&T);
    scanf("%d",&A);
    
    L = (A/12.0)*T;
    printf("%0.3f\n",L);

    return 0;
}