#include <stdio.h>

int main(){
    int n, sum=0;
    
    scanf("%d",&n);
    
    if(n<10000 && n>9999){
        while(n>0){
            int a = n%10;
            n = n/10;
            sum = sum + a;
        }
        printf("%d",sum);
    }
    else{
        printf("Error.. 5 digit number only");
    }

    return 0;
}