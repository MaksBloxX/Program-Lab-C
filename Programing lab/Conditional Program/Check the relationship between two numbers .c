#include<stdio.h>

int main(){
    int a,b;

    printf("Enter number of A: ");
    scanf("%d",&a);
    printf("Enter number of B: ");
    scanf("%d",&b);

    if(a==b){
        printf("This is equal number");
    }
    else if(a>b){
        printf("A is greater than B");
    }
    else{
        printf("A is less than B");
    }

    return 0;
}