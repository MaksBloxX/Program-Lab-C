#include<stdio.h>

int main(){
    int i,j;

    for(i=20;i>0;i--){
        for(j=1;j>0;j--){
            printf("%d",i*j);
        }
        printf("\n");
    }
    return 0;
}