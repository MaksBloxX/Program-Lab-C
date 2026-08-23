#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter Number of A: ");
    scanf("%d",&a);
    printf("Enter Number of B: ");
    scanf("%d",&b);
    printf("Enter Number of C: ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("The largest number is A");
    }
    else if(b>a && b>c){
        printf("The largest number is B");
    }
    else{
        printf("The largest number is C");
    }
    
    return 0;
}