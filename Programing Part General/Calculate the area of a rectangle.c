#include<stdio.h>

int main(){
    int L,W,Area;

    printf("Enter Length  Number: ");
    scanf("%d",&L);

    printf("Enter Width  Number: ");
    scanf("%d",&W);

    Area = L*W;          // Area = Length * Width

    printf("Result Area of Rectangle is: %d",Area);

    return 0;
}

