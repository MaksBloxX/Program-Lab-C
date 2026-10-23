#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    scanf("%[^\n]s", str);

    len = strlen(str);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

/*Another version code

while ( ch[i] != '\0' ) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
        i++;
    }

*/