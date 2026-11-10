#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,found,count=0;
    char ch[13],val[13],arr[1000000][13];
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        scanf("%s %s",ch,val);
        
        if(strcmp(ch,"insert")==0){
            strcpy(arr[count],val);
            count++;
        }
        else if(strcmp(ch,"find")==0){
            
            found=0;
            
            for(j=0; j<count; j++){
                if(strcmp(arr[j],val)==0){
                    found = 1;
                    break;
                }
            }
            if(found==1){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
    }
    
    return 0;
}