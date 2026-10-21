#include <stdio.h>
#include <string.h>

int main()
{
    char ch[15], res[14];
    
    int i;
    
    for(i=1; i<=200; i++){
        scanf("%14s",ch);
        
        if(strcmp(ch,"Hajj")==0){
            strcpy(res,"Hajj-e-Akbar");
        }
        else if(strcmp(ch,"Umrah")==0){
            strcpy(res,"Hajj-e-Asghar");
        }
        else if(strcmp(ch,"*")==0){
            return 0;
        }
        
        printf("Case %d: %s\n",i,res);
    }

    return 0;
}