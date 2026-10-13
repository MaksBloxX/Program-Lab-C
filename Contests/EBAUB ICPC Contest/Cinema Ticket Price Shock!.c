#include <stdio.h>

int main() {
     double A,B;

     scanf("%lf %lf", &A, &B);
     double C = ((B-A)/A)*100;

     printf("%.2lf%%", C);
    return 0;
}
