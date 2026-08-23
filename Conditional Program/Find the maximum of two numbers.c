#include<stdio.h>

int main(){
    int a,b;

    printf("Enter number of A: ");
    scanf("%d",&a);
    printf("Enter number of B: ");
    scanf("%d",&b);

    if(a>b){
        printf("A is greater than B");
    }
    else{
        printf("B is greater than A");
    }

    return 0;
}