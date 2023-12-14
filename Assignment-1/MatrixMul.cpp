#include<stdio.h>
#include<stdlib.h>
#include<conio.h>






int main(int argc, char const *argv[])
{
    int row=0, col =0;
    printf("Enter Row & column size(5 4)v: ");
    scanf("%d %d", &row, &col);
    getchar();

    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col]={0};

printf("Enter Elements of the 1st Array:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        
    }
getchar();

printf("Enter Elements of the 2nd Array:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
        
    }

    getchar();
 printf("Elements of the Array:\n");


 for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        arr3[i][j] = 0; 

        for (int k = 0; k < col; k++)
        {
            arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
}
 

for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
        
    }

    
    return 0;
}

