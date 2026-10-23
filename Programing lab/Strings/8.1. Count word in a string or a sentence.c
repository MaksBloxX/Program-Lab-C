#include <stdio.h>
#include <string.h>
int main() {
    char ch[100];
    int count = 1, i;

    scanf("%[^\n]s", ch);

    int len = strlen(ch);

    for (i = 0; i < len; i++) {

        if (ch[i] == ' ') {
            count++;
        }
    }

    printf("Total words = %d", count);
    return 0;
}
