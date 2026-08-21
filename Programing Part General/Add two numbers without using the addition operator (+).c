#include<stdio.h>

int main(){
    int a,b;

    printf("Enter Number of A: ");
    scanf("%d",&a);
    printf("Enter Number of B: ");
    scanf("%d",&b);
    
    for(int i=1; i<=b; i++){
        a++;                   // addition unary operator
    }
    printf("The addition is: %d",a);
    return 0;
}