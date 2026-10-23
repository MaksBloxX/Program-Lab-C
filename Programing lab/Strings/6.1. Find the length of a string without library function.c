#include <stdio.h>

int main(){
    char ch[20];
    scanf("%[^\n]s",ch);
    
    int i = 0;
    while(ch[i] != '\0'){
        i++;
    }
    printf("%d",i);

    return 0;
}
