#include <stdio.h>

void AddSum(int A[10][10],int B[10][10],int m,int n){
    int i,j,sum[10][10];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum matrix:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i,j,m,n;
    int A[10][10],B[10][10];

    printf("Enter column & row: ");
    scanf("%d %d", &m,&n);

    printf("Enter fist matrix:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d",&B[i][j]);
        }
    }

    AddSum(A, B, m, n);

    return 0;
}