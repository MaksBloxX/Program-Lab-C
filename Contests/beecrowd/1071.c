#include <stdio.h>

int main()
{
    int a,b,i,sum=0;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a>b){
        for(i=b+1; i<a; i++){
            if(b%2!=0){
                sum = sum+b;
            }
        }
        printf("%d\n",sum);
    }
    
    else if(a<b){
        for(i=a+1; i<b; i++){
            if(a%2!=0){
                sum = sum+b;
            }
        }
        printf("%d\n",sum);
    }
    
    else{
        printf("%d\n",sum);
    }

    return 0;
}
