#include <stdio.h>

int main()
{
    FILE *input, *output;
    int a, b, sum;

    input = fopen("input.txt", "r");

    if (input == NULL) {
        printf("Error: Could not open 'input.txt'. Please create it first!\n");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error: Could not create or open 'output.txt'.\n");
        fclose(input); 
        return 1; 
    }

    if (fscanf(input, "%d %d", &a, &b) == 2) {
        sum = a + b;
        fprintf(output, "Sum = %d\n", sum);
        printf("Sum stored in output file successfully.\n");
    }
    else {
        printf("Error: 'input.txt' does not contain two valid numbers.\n");
       }

    fclose(input);
    fclose(output);

    return 0;
}
