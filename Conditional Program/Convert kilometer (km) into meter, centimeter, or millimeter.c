#include<stdio.h>

int main(){
    int k,n;

    printf("Enter the kilometer: ");
    scanf("%d",&k);

    printf("1.Meter\n2.Centimeter\n3.Millimeter\n");
    printf("What do you want convert: ");
    scanf("%d",&n);

    switch(n){
    case 1:
        int m = k*1000;
        printf("Converting Meter: %d m",m);
        break;
    case 2:
        int c = k*100000;
        printf("Converting Centimeter: %d cm",c);
        break;
    case 3:
        int ml = k*1000000;
        printf("Converting Millimeter: %d mm",ml);
        break;
    default:
        printf("Enter the right menu....");
        break;
    }

    return 0;
}