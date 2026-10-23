#include <stdio.h>

int main() {
    char ch1[100], ch2[100];
    int i = 0;

    scanf("%[^\n]s", ch1);

    while (ch1[i] != '\0') {
        ch2[i] = ch1[i];
        i++;
    }

    ch2[i] = '\0';

    printf("Copied string: %s", ch2);
    return 0;
}
