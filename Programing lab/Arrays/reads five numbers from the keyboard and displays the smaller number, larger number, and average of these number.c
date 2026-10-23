#include <stdio.h>

int main(){
    int arr[10],i, n = 5, sum = 0;
    int largest, smallest;
    float avg;

    printf("Enter %d elements: ",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    avg = sum/n;

    largest = smallest = arr[0];

    for(i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    printf("Array largest element: %d", largest);
    printf("\nArray smallest element: %d", smallest);
    printf("\nArray element Average: %0.2f", avg);

    return 0;
}