#include<stdio.h>

int main(){
    int a,b;

    printf("Enter Any Number of A: ");
    scanf("%d",&a);
    printf("Enter Any Number of B: ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The swap number of A: %d\n",a);
    printf("The swap number of B: %d",b);

    return 0;
}


