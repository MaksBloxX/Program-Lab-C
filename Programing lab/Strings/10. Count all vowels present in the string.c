#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowel = 0, consonants = 0;

    scanf("%[^\n]s", str);

    while (str[i] != '\0') {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
            str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U') {

            vowel++;
        }
        else {
            consonants++;
        }
        i++;
    }

    printf("Total vowels = %d", vowel);
    printf("\nTotal vowels = %d", consonants);
    return 0;
}
