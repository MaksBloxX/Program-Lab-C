#include <stdio.h>

int main()
{
    int k,m,n,x,y,a,b,i;
    
    while(scanf("%d",&k) == 1 && k != 0){
        
        scanf("%d%d",&n,&m);
        
        for(i=0; i<k; i++){
            scanf("%d%d",&x,&y);
            
            a=x-n;
            b=y-m;
            
            if(a>0 && b>0){
                printf("NE\n");
            }
            else if(a<0 && b>0){
                printf("NO\n");
            }
            else if(a<0 && b<0){
                printf("SO\n");
            }
            else if(a>0 && b<0){
                printf("SE\n");
            }
            else if(a==0 || b==0){
                printf("divisa\n");
            }
        }
    }

    return 0;
}
