#include <stdio.h>
#include <string.h>


int main(){
    int t,k,i,total = 0;
    char ch[10];
    
    scanf("%d",&t);
    
    if(t<=100 && t>=1){
        for(i=0; i<t; i++){
            scanf("donate %d",&k);
            t = t-2;
            
            if(k>=100){
                scanf("%s",ch);
                
                if(strcmp(ch,"report")==0){
                    
                    total = total + k;
                    printf("%d\n",total);
                }
            }
        }
    }

    return 0;
}