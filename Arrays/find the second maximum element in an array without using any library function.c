#include <stdio.h>

int main() {
    int arr[5], i;
    int max, secondMax;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 0; i < 5; i++) {
        if(arr[i] > max) {
            secondMax = max;             // Old max becomes second max
            max = arr[i];                // Update the max
        }
        else if(arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    printf("Second maximum element = %d\n", secondMax);

    return 0;
}