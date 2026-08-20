#include<stdio.h>

int main(){
    int a,b,area;

    printf("Enter Length Number: ");
    scanf("%d",&a);
    printf("Enter Height Number: ");
    scanf("%d",&b);

    area = .5*a*b;     // triangle area = 1/2 x (lenght x Height)

    printf("Result of triangle area: %d",area);

    return 0;
}


