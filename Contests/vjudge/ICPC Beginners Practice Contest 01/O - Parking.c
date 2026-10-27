#include <stdio.h>

int main()
{
    int t,n,i,j,max,min,sum,arr[100];
    
    scanf("%d",&t);
    
    for(i=0; i<t; i++){
        scanf("%d",&n);
        
        for(j=0; j<n; j++){
            scanf("%d",&arr[j]);
        }
        
        max = arr[0];
        min = arr[0];
            
        for(j=0; j<n; j++){
            
            if(max<arr[j]){
                max = arr[j];
            }
            
            if(min>arr[j]){
                min = arr[j];
            }
        }

        sum = (max - min)*2;
        printf("%d\n",sum);
    }
    
    return 0;
}
