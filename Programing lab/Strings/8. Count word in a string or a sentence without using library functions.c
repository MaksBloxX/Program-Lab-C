#include <stdio.h>

int main() {
    char ch[100];
    int i = 0, words = 1;

    scanf("%[^\n]s", ch);

    while (ch[i] != '\0') {

        if (ch[i] == ' ') {
            words++;
        }
        i++;
    }

    printf("Total words = %d", words);

    return 0;
}
