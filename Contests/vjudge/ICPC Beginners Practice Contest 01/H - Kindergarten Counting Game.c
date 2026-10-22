#include <stdio.h>

int main() {
    char ch[500];
    int i, words;

    while (scanf("%499[^\n]", ch) == 1){
        getchar();
        i = 0;
        words = 0;

        while (ch[i] != '\0'){
            if (ch[i] != ' ' && (i==0 || ch[i-1]==' ')){
                words++;
            }

            i++;
        }

        printf("Total words = %d", words);
    }

    return 0;
}
