#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    scanf("%[^\n]s", str);

    if (str[0] >= 'a' && str[0] <= 'z') {
        result[j++] = str[0] - 32;
    } else {
        result[j++] = str[0];
    }

    i = 1;

    while (str[i] != '\0') {
        if (str[i] == ' ') {

            i++;

            if (str[i] >= 'a' && str[i] <= 'z') {
                result[j++] = str[i] - 32;
            } else {
                result[j++] = str[i];
            }
        }
        else {
            result[j++] = str[i];
        }
        i++;
    }

    result[j] = '\0';

    printf("Camel Case: %s", result);
    return 0;
}

