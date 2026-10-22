#include <stdio.h>

int main()
{
    int t,a,b,i,j;
    
    scanf("%d",&t);
    if(t>=1 && t<=100){
    for(i=1; i<=t; i++){
        scanf("%d",&a);
        scanf("%d",&b);
        int sum = 0;
        if(a<=b && b<=100){
            if(a%2==0){
                a=a+1;
            }
            if(b%2==0){
                b=b-1;
            }
        
        for(j=a; j<=b; j=j+2){
            sum = sum + j;
        }
        
        printf("Case %d: %d\n",i,sum);
    }
    }
    }
    return 0;
}
