#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    int i, len;

    scanf("%[^\n]s", ch);

    len = strlen(ch);

    printf("Reversed string: ");

    for (i = len - 1; i >= 0; i--) {
        printf("%c", ch[i]);
    }

    return 0;
}

/*Another version code

for(i = 0; i < len / 2; i++){
temp = str[i];
str[i] = str[len - 1 - i];
str[len - 1 - i] = temp;
}

printf("Reversed String = %s", str);

*/