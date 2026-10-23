#include <stdio.h>

int main() {
    char ch[100];
    int i = 0;

    scanf("%[^\n]s", ch);

    while (ch[i] != '\0') {

        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32; 
        }                      // suru te ‘A’ ar sese ‘a’ tai Upper chaile -32
        i++; 
    }

    printf("%s", ch);
    return 0;
}
