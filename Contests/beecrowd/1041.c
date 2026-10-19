#include <stdio.h>

int main()
{
    float x, y;
    scanf("%f %f", &x, &y);

    if(x == 0 && y == 0){
        printf("Origem\n");
    }
    else if(x > 0 && y > 0){
        printf("Q1\n");
    }
    else if(x < 0 && y > 0){
        printf("Q2\n");
    }
    else if(x < 0 && y < 0){
        printf("Q3\n");
    }
    else if(x > 0 && y < 0){
        printf("Q4\n");
    }
    else if(y == 0){
        printf("Eixo X\n");
    }
    else if(x == 0){
        printf("Eixo Y\n");
    }

    return 0;
}

// New Problem: 1041 - Coordinates of a Point
/* 'If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y"' er mane jodi x axis point man hoy tahole y=0 ar x>=0.0001 hobe na karon x axis holo right and left rekha(line) ase. dhoro x=-5.0 y=0.0 tahole x axis e point ache ba left dike ache.

"missing else{}" na likhe run korle o kaj korbe karon else if er porer condition gulo check hobe. but else{} use korle jodi kono condition match na kore tahole else{} er vitore je code ache ta run hobe. but ekhane else{} use kora hoy nai karon sob condition check kora hoyeche. got it? c
*/