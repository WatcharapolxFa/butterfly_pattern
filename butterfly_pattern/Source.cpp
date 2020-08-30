#include <stdio.h>
struct number {
    int x[10];
    int i;
    int j;
}num, row, star, space;


void moretriangle(int n)
{
    for (row.i = 1; row.i <= n - 1 && row.i > 0; row.i++)
    {
        for (star.j = 1; star.j <= row.i && star.j > 0; star.j++)
        {
            printf("* ");
        }
        for (space.j = 1; space.j < (2 * n) - (row.i * 2) && space.j>0; space.j++)
        {
            printf("  ");
        }
        for (star.j = 1; star.j <= (n * 2) - 1 && star.j > 0; star.j++)
        {
            printf("* ");
            if (star.j == row.i) break;
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


void lasstriangle(int n)
{
    for (row.i = 1; row.i <= n - 1 && row.i > 0; row.i++)
    {
        for (star.j = n - 1; star.j >= row.i; star.j--)
        {
            printf("* ");
        }
        for (space.j = 1; space.j < row.i * 2 && space.j>0; space.j++)
        {
            printf("  ");
        }
        for (star.j = n - 1; star.j > 0; star.j--)
        {
            printf("* ");
            if (star.j == row.i) break;
        }
        printf("\n");
    }
}


int main()
{
    scanf("%d", &num.x[1]);
    moretriangle(num.x[1]);
    triangle(num.x[1]);
    lasstriangle(num.x[1]);
    return 0;
}