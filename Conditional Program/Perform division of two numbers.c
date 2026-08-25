#include<stdio.h>

int main() {
    float a,b,div;

    printf("Enter number of A: ");
    scanf("%f",&a);
    printf("Enter number of B: ");
    scanf("%f",&b);

    if (b>0){
        div = a/b;
        printf("Division: %0.2f\n",div);
    }
    else{
        printf("Error but zero isn't allow...");
    }

    return 0;
}