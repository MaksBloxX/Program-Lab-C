#include <stdio.h>
#include <ctype.h>

int main() {
    char ch[100];
    int i = 0;

    scanf("%[^\n]s",ch);

    while (ch[i] != '\0') {
        ch[i] = toupper(ch[i]);
        i++;
    }

    printf("%s", ch);
    return 0;
}
