#include<stdio.h>

int main(){
    int n,digit;

    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    digit = n%(10*10);   // simply n%100;  1 digit = n%10; 3 digit = n%1000;
    
    printf("The last two digits of %d is: %d",n,digit);

    return 0;
}
