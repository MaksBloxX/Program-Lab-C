#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A,B,C,tri,cir,tra,squ,rec;
    const double pi = 3.14159;

    scanf("%lf%lf%lf",&A,&B,&C);
    
    tri = .5*A*C;
    cir = pi*C*C;
    tra = .5*(A+B)*C; // Area of trapezoid = 1/2 * (a + b) * h
    squ = B*B;
    rec = A*B;
    
    printf("TRIANGULO: %0.3f\n",tri);
    printf("CIRCULO: %0.3f\n",cir);
    printf("TRAPEZIO: %0.3f\n",tra);
    printf("QUADRADO: %0.3f\n",squ);
    printf("RETANGULO: %0.3f\n",rec);
 
    return 0;
}