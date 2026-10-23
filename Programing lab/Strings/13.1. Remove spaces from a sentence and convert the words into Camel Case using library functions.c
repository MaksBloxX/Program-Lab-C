#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], result[100];
    int i, j = 0;
    int newWord = 1;

    scanf("%[^\n]s", str);

    for (i = 0; i < strlen(str); i++) {

        if (isspace(str[i])) {
            newWord = 1;
            continue;
        }

        if (newWord) {
            result[j++] = toupper(str[i]);
            newWord = 0;
        }
        else {
            result[j++] = tolower(str[i]);
        }
    }

    result[j] = '\0';

    printf("Camel Case: %s", result);
    return 0;
}
