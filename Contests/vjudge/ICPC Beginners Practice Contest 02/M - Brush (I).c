#include <stdio.h>

int main()
{
    int t,n,i,j,a[1000],sum;
    
    scanf("%d",&t);
    //printf("\n");      //New problem
    
    if(t<=100){
        for(i=1; i<=t; i++){
            scanf("%d",&n);
            sum = 0;
            
            for(j=0; j<n; j++){
                scanf("%d",&a[j]);
                
                if(a[j]>0){
                    sum = sum + a[j];
                }
            }
            
            printf("Case %d: %d\n",i,sum);
        }
    }

    return 0;
}