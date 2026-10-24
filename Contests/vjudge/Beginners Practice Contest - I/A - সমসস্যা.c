#include <stdio.h>

int main()
{
    int n,i,arr[10];
    
    scanf("%d",&n);
    
    if(n>=1 && n<=100){
    
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        
        if(arr[n-1]==1){
            printf("HARD\n");
        }
        
        if(arr[n-1]==0){
            printf("EASY\n");
        }
    }
}
    return 0;
}
