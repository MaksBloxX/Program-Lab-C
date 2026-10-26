#include <stdio.h>

int main()
{
    int a,b,i,sum=0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a>b){
        if(b%2==0){
            b=b+1;
        }
        else{
            b=b+2;
        }
        for(i=b; i<a; i=i+2){
            sum = sum + i;
        }
        printf("%d\n",sum);
    }
    
    else if(b>a){
        if(a%2==0){
            a=a+1;
        }
        for(i=a; i<b; i=i+2){
            sum = sum + i;
        }
        printf("%d\n",sum);
    }
    
    else{
        printf("%d\n",sum);
    }

    return 0;
}
