#include<stdio.h>

int main(){
    int a,b,temp;

    printf("Enter Any Number of A: ");
    scanf("%d",&a);
    printf("Enter Any Number of B: ");
    scanf("%d",&b);

    temp = a;                 // c=a > a=b > b=c (c - temp)
    a = b;
    b = temp;

    printf("The swap number of A: %d\n",a);
    printf("The swap number of B: %d",b);

    return 0;
}


