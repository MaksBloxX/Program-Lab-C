#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(n%7==0){
        printf("It is multiple of 7");
    }
    else{
        printf("It is not multiple of 7");
    }

    return 0;
}