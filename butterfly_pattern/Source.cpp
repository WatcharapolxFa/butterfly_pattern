#include <stdio.h>
struct PATTERN {
    int fa[10];
    int i;
    int q;
}num, row, star, space;


void Moretriangle(int n)
{
    for (row.i = 1; row.i <= n - 1 && row.i > 0; row.i++)
    {
        for (star.q = 1; star.q <= row.i && star.q > 0; star.q++)
        {
            printf("* ");
        }
        for (space.q = 1; space.q < (2 * n) - (row.i * 2) && space.q>0; space.q++)
        {
            printf("  ");
        }
        for (star.q = 1; star.q <= (n * 2) - 1 && star.q > 0; star.q++)
        {
            printf("* ");
            if (star.q == row.i) break;
        }
        printf("\n");
    }
}


void triangle(int n)
{
    for (row.i = 1; row.i <= (2 * n) - 1 && row.i > 0; row.i++)
    {
        printf("* ");
    }
    printf("\n");
}


void pATTERN(int n)
{
    for (row.i = 1; row.i <= n - 1 && row.i > 0; row.i++)
    {
        for (star.q = n - 1; star.q >= row.i; star.q--)
        {
            printf("* ");
        }
        for (space.q = 1; space.q < row.i * 2 && space.q>0; space.q++)
        {
            printf("  ");
        }
        for (star.q = n - 1; star.q > 0; star.q--)
        {
            printf("* ");
            if (star.q == row.i) break;
        }
        printf("\n");
    }
}


int main()
{
    printf
    scanf_s("%d", &num.fa[1]);
    Moretriangle(num.fa[1]);
    triangle(num.fa[1]);
    pATTERN(num.fa[1]);
    return 0;
}