#include <stdio.h>

int main(){
    int arr[10],n,i;
    int largest, lowest;

    printf("Enter any index number: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    largest = lowest = arr[0];

    for(i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<lowest){
            lowest = arr[i];
        }
    }

    printf("Array largest element is: %d", largest);
    printf("\nArray lowest element is: %d", lowest);

    return 0;
}