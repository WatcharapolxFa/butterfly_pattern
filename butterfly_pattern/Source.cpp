#include <stdio.h>
struct PATTERN {
    int fa[10];
    int i;
    int q;
}numm, row, star, space;

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



void triangle(int n)
{
    for (row.i = 1; row.i <= (2 * n) - 1 && row.i > 0; row.i++)
    {
        printf("* ");
    }
    printf("\n");
}



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

int main()
{

    printf("Enter number : ");
    if (scanf_s("%d", &numm.fa[1]))
    {
    Moretriangle(numm.fa[1]);
    triangle(numm.fa[1]);
    pATTERN(numm.fa[1]);
    printf("End Program.");
    }
    else
    {
        printf("IN PUT Integer Number.\n");
        printf("End Program.");
    }
   
    return 0;
}