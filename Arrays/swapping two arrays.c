#include <stdio.h>

int main() {
    int arr1[5], arr2[5], temp[5];
    int i;

    printf("Enter 5 elements of first array:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 elements of second array:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < 5; i++) {

        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }

    printf("\nFirst array after swapping:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array after swapping:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}