#include <stdio.h>

int main()
{
    char ch[100];
    int t,i,j,letter;
    
    scanf("%d",&t);
    getchar();
    
    for(i=1; i<=t; i++){
        
        letter=0;
        j=0;
        
        fgets(ch, sizeof(ch), stdin);

        while(ch[j]!='\0'){
            if(ch[j]=='a' || ch[j]=='d' || ch[j]=='g' || ch[j]=='j' ||
               ch[j]=='m' || ch[j]=='p' || ch[j]=='t' || ch[j]=='w' ||
               ch[j]==' '){
                   letter+=1;
               }
            
            else if(ch[j]=='b' || ch[j]=='e' || ch[j]=='h' || ch[j]=='k' ||
               ch[j]=='n' || ch[j]=='q' || ch[j]=='u' || ch[j]=='x'){
                   letter+=2;
               }
               
            else if(ch[j]=='c' || ch[j]=='f' || ch[j]=='i' || ch[j]=='l' ||
               ch[j]=='o' || ch[j]=='r' || ch[j]=='v' || ch[j]=='y'){
                   letter+=3;
               }
               
            else if(ch[j]=='s' || ch[j]=='z'){
                   letter+=4;
               }
               
            j++;
        }
        
        printf("Case #%d: %d\n",i,letter);
    }

    return 0;
}