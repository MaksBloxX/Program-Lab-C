#include <stdio.h>
 
int main() {
    float a,b,X;
    float A = 3.5, B = 7.5;
    scanf("%f",&a);
    scanf("%f",&b);
    X = (A*a + B*b)/(A + B);
    printf("MEDIA = %0.5f\n",X);
    return 0;
}

#New Problem: 1005 - Average 1