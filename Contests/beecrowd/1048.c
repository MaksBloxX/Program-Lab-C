#include <stdio.h>

int main()
{
    float sal,per,new,total;

    scanf("%f",&sal);
    
    if(sal<=400.00){
        per = 0.15;
        new = sal*per;
        total = sal+new;
    }
    else if(sal>=400.01 && sal<=800.00){
        per = 0.12;
        new = sal*per;
        total = sal+new;
    }
    else if(sal>=800.01 && sal<=1200.00){
        per = 0.10;
        new = sal*per;
        total = sal+new;
    }
    else if(sal>=1200.01 && sal<=2000.00){
        per = 0.07;
        new = sal*per;
        total = sal+new;
    }
    else{
        per = 0.04;
        new = sal*per;
        total = sal+new;
    }
    
    printf("Novo salario: %0.2f\n",total);
    printf("Reajuste ganho: %0.2f\n",new);
    printf("Em percentual: %0.0f %\n",per*100);
        
    return 0;
}
