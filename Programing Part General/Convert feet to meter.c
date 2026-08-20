#include<stdio.h>

int main(){
    float m,f;                  // m - Meter; f- feet;

    printf("Enter feet Number: ");
    scanf("%f",&f);

    m = f*3.28;                // 1 ft = 3.28 m

    printf("Result meter number: %0.2f",m);

    return 0;
}


