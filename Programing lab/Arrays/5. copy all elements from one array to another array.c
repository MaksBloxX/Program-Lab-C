#include <stdio.h>

int main(){
    int arr[10],arr2[10],n,i;

    printf("Enter any index number: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        arr2[i] = arr[i];
    }

    printf("Copy array element: ");

    for(i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }

    return 0;
}