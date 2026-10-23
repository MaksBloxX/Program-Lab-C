#include <stdio.h>

int main(){
    float a,b;
    float sum,div,avg;

    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    sum = a+b;
    avg = sum/2;

    if(b>0){
        div = a/b;
    }
    else{
        printf("Error but zero isn't allow..\n");
        return 0;
    }

    printf("Sum = %.2f\n",sum);
    printf("Quotient = %.2f\n",div);
    printf("Average = %.2f\n",avg);

    if(avg<sum){
        printf("Average is less than the sum.");
	}
    return 0;
}