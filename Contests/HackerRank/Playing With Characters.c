#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100],sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", sen); //space ase
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}

//New Problem: Playing With Characters