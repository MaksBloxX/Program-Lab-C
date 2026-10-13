#include <stdio.h>
#include <math.h>
 
int main() {
 
    double Vol,R;
    const double pi = 3.14159;

    scanf("%lf",&R);
    
    Vol = (4/3.0)*pi*pow(R,3);
    printf("VOLUME = %0.3f\n",Vol);
 
    return 0;
}