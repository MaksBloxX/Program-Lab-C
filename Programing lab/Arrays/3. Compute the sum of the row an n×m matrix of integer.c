#include <stdio.h>

int main(){
    int arr[10][10],m,n,i,j;

    printf("Enter any Column & Row number: ");
    scanf("%d %d",&m, &n);

    printf("Enter Matrix elements:\n");

    for(i=0; i<m; i++){
        for(j=0; j<n; j++) {
            scanf("%d",&arr[i][j]);
            }
        }

    for(i=0; i<m; i++){
        int sum = 0;                       //for sum Row 
        for(j=0; j<n; j++) {
            sum = sum + arr[i][j];
            }
            printf("\nSum of Row %d: %d",(i+1),sum);
        }

    return 0;
}