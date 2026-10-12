#include <stdio.h>
 
int main() {
    double a,b,c,X;
    double A = 2, B = 3, C = 5;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    X = (A*a + B*b + C*c)/(A + B + C);
    printf("MEDIA = %0.1f\n",X);
    return 0;
}