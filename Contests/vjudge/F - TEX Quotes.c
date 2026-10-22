#include <stdio.h>

int main() {
    int c;
    int m = 0;

    while ((c = getchar()) != EOF) {
        if (c == '"') {
            if (m == 0) {
                printf("``");
                m = 1;
            } else {
                printf("''");
                m = 0;
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}
