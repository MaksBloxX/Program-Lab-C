#include <stdio.h>

int main(){
    FILE *fp;
    int n = 0, i; 

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open text.txt. Make sure the file exists!\n");
        return 1; 
    }

    if (fscanf(fp, "%d", &n) == 1) {
       
        for(i = 1; i <= n; i++){
            printf("%d ", i);
        }
        printf("\n");
    }
    else {
        printf("Error: Failed to read a valid integer from the file.\n");
    }

    fclose(fp);
    return 0;
}
