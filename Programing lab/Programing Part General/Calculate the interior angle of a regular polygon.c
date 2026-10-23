#include<stdio.h>

int main(){
    int n,area;

    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    area = ((n-1)*180)/n;
    
    printf("Result of interior area: %d",area);

    return 0;
}