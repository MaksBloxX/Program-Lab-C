#include <stdio.h>
#include <string.h>

int main(){
    char ch[20];
    
    scanf("%[^\n]s",ch);

    printf("%d",strlen(ch));

    return 0;
}
