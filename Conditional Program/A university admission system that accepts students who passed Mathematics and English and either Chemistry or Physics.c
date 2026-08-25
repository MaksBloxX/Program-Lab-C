#include<stdio.h>

int main(){
    int m,e,p,c;

    printf("Enter Mathematics mark: ");
    scanf("%d",&m);
    printf("Enter English mark: ");
    scanf("%d",&e);
    printf("Enter Physics mark: ");
    scanf("%d",&p);
    printf("Enter Chemistry mark: ");
    scanf("%d",&c);

    if(m>=80 && e>=80 && (p>=80 || c>=80)){
        printf("You can admission...");
    }
    else{
        printf("You can't admission...");
    }

    return 0;
}