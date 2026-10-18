#include <stdio.h>

int main()
{
    double a, b, c, d, n, m, x;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    n = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10;

    printf("Media: %.1f\n", n);

    if (n >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (n >= 5.0)
    {
        printf("Aluno em exame.\n");

        scanf("%lf", &m);

        printf("Nota do exame: %.1f\n", m);

        x = (n + m) / 2;

        if (x >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", x);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}

// New Problem: 1040 - Average 3 
/* 'average with weights 2, 3, 4 e 1 respectively' er mane "a+b+c+d/4" e cilo so weighted average er formula use kora hoiche jemon "a*2 + b*3 + c*4 + d*1 / 10". but 10 kamne? er mane 2+3+4+1=10.

'In case of exam, read one more score' er mane input nite hobe so input e 4 ta score er por ekta extra score input nite hobe jodi student exam e thake. Then calculate the final average and print it. er mane exam e thakle final average calculate kore print korte hobe.
*/