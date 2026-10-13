#include <stdio.h>
 
int main() {
 
    int A1,B1,A2,B2;
    double C1,C2,TOTAL;

    scanf("%d%d",&A1,&B1);
    scanf("%lf",&C1);
    
    scanf("%d%d",&A2,&B2);
    scanf("%lf",&C2);

    TOTAL = (B1*C1) + (B2*C2);
    
    printf("VALOR A PAGAR: R$ %0.2f\n",TOTAL);
 
    return 0;
}

// New Problem: 1010 - Simple Calculate
/* Because Product Code (A) is a serial number/model name, it is not necessary to use it in calculations.
B is the number of items purchased, and 
C is the price per item. 
Your task is to calculate and print the total amount to be paid for both products.*/