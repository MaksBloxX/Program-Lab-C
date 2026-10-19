#include <stdio.h>

int main()
{
    int a,b,c,x,y,z;

    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b && a<c){
        x=a;
        if(b<c){
            y=b;
            z=c;
        }
        else{
            y=c;
            z=b;
        }
    }
    else if(b<a && b<c){
        x=b;
        if(a<c){
            y=a;
            z=c;
        }
        else{
            y=c;
            z=a;
        }
    }
    else if(c<a && c<b){
        x=c;
        if(a<b){
            y=a;
            z=b;
        }
        else{
            y=b;
            z=a;
        }
    }
    
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    
    printf("\n%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    
    return 0;
}