#include <stdio.h>
#include <string.h>

int main()
{
    char ch[15], res[14];
    
    int i;
    
    for(i=1; i<=2000; i++){
        scanf("%14s",ch);
        
        if(strcmp(ch,"HELLO")==0){
            strcpy(res,"ENGLISH");
        }
        else if(strcmp(ch,"HOLA")==0){
            strcpy(res,"SPANISH");
        }
        else if(strcmp(ch,"HALLO")==0){
            strcpy(res,"GERMAN");
        }
        else if(strcmp(ch,"BONJOUR")==0){
            strcpy(res,"FRENCH");
        }
        else if(strcmp(ch,"CIAO")==0){
            strcpy(res,"ITALIAN");
        }
        else if(strcmp(ch,"ZDRAVSTVUJTE")==0){
            strcpy(res,"RUSSIAN");
        }
        else if(strcmp(ch,"#")==0){
            return 0;
        }
        else{
            strcpy(res,"UNKNOWN");
        }
        
        printf("Case %d: %s\n",i,res);
    }

    return 0;
}