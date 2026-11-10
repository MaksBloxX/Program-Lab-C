#include <stdio.h>

int main()
{
    int i,j,count = 0,found;
    long long int n,q,t[50000],s[100000];
    
    //N input
    scanf("%lld",&n);
    for(i=0; i<n; i++){
        scanf("%lld",&s[i]);
    }
    
    //Q input
    scanf("%lld",&q);
    for(j=0; j<q; j++){
        scanf("%lld",&t[j]);
    }
    
    //Searching calculation
    for(i=0; i<q; i++){
        
        found = 0;
        
        for(j=0; j<n; j++){
            if(t[i]==s[j]){
                found = 1;
                break;
            }
        }
        
        if(found==1){
            count++;
        }
    }
    
    printf("%d\n",count);

    return 0;
}