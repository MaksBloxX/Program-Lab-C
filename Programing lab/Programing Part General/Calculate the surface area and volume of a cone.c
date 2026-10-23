#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){
    float r,h,Area,Vol;

    printf("Enter Radius Number: ");
    scanf("%f",&r);

    printf("Enter Height Number: ");
    scanf("%f",&h);

    Area = (PI*r)*(r+sqrt(r*r+h*h));   // Surface area = πr (r + √(r² + h²))
    Vol = (1.0/3.0)*PI*r*r*h;          // Volume = (1/3) × π × r² × h

    printf("Result Surface Area of cone is: %0.2f",Area);
    printf("\nResult Volume of cone is: %0.2f",Vol);

    return 0;
}

