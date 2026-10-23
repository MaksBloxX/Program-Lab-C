#include<stdio.h>

int main(){
    float C,F;             // C - Celsius; F- Fahrenheit

    printf("Enter Fahrenheit Temperature: ");
    scanf("%f",&F);

    C = (F - 32)*5/9;     // C/5 = (F-32)/9

    printf("Result Celsius Temperature: %0.2f",C);

    return 0;
}


