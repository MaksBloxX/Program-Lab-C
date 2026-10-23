#include<stdio.h>
#define PI 3.1416

int main(){
    float r,Area;

    printf("Enter Radius Number: ");
    scanf("%f",&r);

    Area = PI*r*r;               // area = Πr2

    printf("Result Area of Circle is: %0.2f",Area);

    return 0;
}


