#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter number of A: ");
    scanf("%d",&a);
    printf("Enter number of B: ");
    scanf("%d",&b);
    printf("Enter number of C: ");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){
        printf("Triangle is valid.");
    }
    else{
        printf("Triangle isn't valid.");
    }

    return 0;
}