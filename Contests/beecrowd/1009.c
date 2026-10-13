#include <stdio.h>
 
int main() {
 
    double A,B,C;
    char str[00];
    
    scanf("%s",str);
    scanf("%lf",&A);
    scanf("%lf",&B);
    
    C = ((B*15)/100) + A;
    
    printf("TOTAL = R$ %0.2f\n",C);
 
    return 0;
}