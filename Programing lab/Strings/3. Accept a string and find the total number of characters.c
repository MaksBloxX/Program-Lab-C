#include <stdio.h>
#include <string.h>

int main(){
    char ch[20];
    scanf("%[^\n]s",ch);
    
    int len = strlen(ch);
    printf("%d",len);

    return 0;
}
