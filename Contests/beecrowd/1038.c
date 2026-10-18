#include <stdio.h>

int main()
{
    int x,y;
    float t;
    scanf("%d%d",&x,&y);
    
    switch(x){
        case 1:
            t = y*4.00;
            printf("Total: R$ %0.2f\n",t);
            break;
        
        case 2:
            t = y*4.50;
            printf("Total: R$ %0.2f\n",t);
            break;
        
        case 3:
            t = y*5.00;
            printf("Total: R$ %0.2f\n",t);
            break;
            
        case 4:
            t = y*2.00;
            printf("Total: R$ %0.2f\n",t);
            break;
            
        case 5:
            t = y*1.50;
            printf("Total: R$ %0.2f\n",t);
            break;
            
        default:
            printf("Incorrect code! Try again\n");
            break;
    }

    return 0;
}
