#include <stdio.h>

int main()
{
    float a,b,c,area,para;

    scanf("%f%f%f",&a,&b,&c);
    
    if(a+b>c && a+c>b && b+c>a){
        para = a+b+c;
        printf("Perimetro = %0.1f\n",para);
    }
    else{
        area = .5*c*(a+b);
        printf("Area = %0.1f\n",area);
    }
    
    return 0;
}