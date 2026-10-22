#include <stdio.h>
#include <string.h>


int main(){
    int t,k,i,total = 0;
    char ch[10];

    scanf("%d",&t);

    if(t<=100 && t>=1){
        for(i=1; i<=t; i++){

            scanf("%9s", ch);

            if(strcmp(ch,"donate")==0){
                scanf("%d",&k);
                if(k>=100){
                    total = total + k;
                }
            }

            if(strcmp(ch,"report")==0){
                    printf("%d\n",total);
                }
        }
    }

    return 0;
}
