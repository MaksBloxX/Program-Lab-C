#include <stdio.h>

int main()
{
    int t,i;
    long long int w,n,m;      //new problem

    scanf("%d",&t);
    
    if(t<10000){
        for(i=1; i<=t; i++){
            scanf("%lld",&w);
            
            if(w>=2){
                if(w%2!=0){
                    printf("Case %d: Impossible\n",i);
                }
                else{
                    n = w;
                    while(n%2==0){
                        n = n/2;
                    }
                    
                    m = w/n;
                    
                    printf("Case %d: %lld %lld\n",i,n,m);
                }
            }
        }
    }

    return 0;
}