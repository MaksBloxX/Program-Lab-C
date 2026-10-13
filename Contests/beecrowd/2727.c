#include <stdio.h>
#include <string.h>


int main(){
    int n, i, count;
    char str[100], letter;

    scanf("%d", &n);
    for(i=0; i<n; i++){
        fgets(str, sizeof(str), stdin);

        count = strlen(str) - 1; // Subtract 1 to exclude the newline character
        letter = 'a' + (count - 1);

        printf("%c\n", letter);
    }

    return 0;

}