
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int r = 0, c = 0, r1, r2, c1, c2;
    printf("Enter Row & column size: ");
    scanf("%d %d", &r, &c);

    r1 = c2 = r;
    c1 = r2 = c;

    int a[r1][c1];
    int b[r2][c2];

    printf("Enter Elements of the Array:\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    getchar();

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            b[j][i] = a[i][j];

    printf("The elements of the matrix are:\n");

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d " ,b[i][j]);
        }
        printf("\n");
    }
}
