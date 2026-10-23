#include<stdio.h>

int main(){
    int a,b;

    printf("Enter Number of A: ");
    scanf("%d",&a);
    printf("Enter Number of B: ");
    scanf("%d",&b);
    
    for(int i=1; i<=b; i++){
        a--;                   // subtraction unary operator
    }
    printf("The subtraction is: %d",a);
    return 0;
}

