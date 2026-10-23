#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c;
    float D,root,root1,root2;

    printf("Enter number of A: ");
    scanf("%f",&a);
    printf("Enter number of B: ");
    scanf("%f",&b);
    printf("Enter number of C: ");
    scanf("%f",&c);

    D = b*b-4*a*c;

    if (D>0){
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("First root: %0.2f\n",root1);
        printf("second root: %0.2f",root2);
    }
    else if(D==0){
        root = -b /(2*a);
        printf("Equal root: %0.2f\n",root);
    }
    else{
        printf("Roots are imaginary.");
    }

    return 0;
}