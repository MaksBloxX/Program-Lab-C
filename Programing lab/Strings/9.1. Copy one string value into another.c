#include <stdio.h>
#include <string.h>

int main() {
    char ch1[100], ch2[100];

    scanf("%[^\n]s", ch1);

    strcpy(ch2, ch1);

    printf("Copied string: %s", ch2);
    return 0;
}
