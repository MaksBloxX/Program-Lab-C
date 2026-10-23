#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float s, area;

    printf("Enter Number of A: ");
    scanf("%d",&a);
    printf("Enter Number of B: ");
    scanf("%d",&b);
    printf("Enter Number of C: ");
    scanf("%d",&c);

    s = (a+b+c)/2;                    // s = (a+b+c)/2
    area = sqrt(s*(s-a)*(s-b)*(s-c)); // triangle area = root(s(s-a)(s-b)(s-c))

    printf("Result of triangle area: %0.2f",area);

    return 0;
}
