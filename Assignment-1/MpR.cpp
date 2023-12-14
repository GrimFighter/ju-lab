#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0, p = 0;

    // Input the size of the matrix
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);
    getchar();

    printf("Enter the P: ");
    scanf("%d", &p);
    getchar();

    // Declare the matrix
    double matrix[n][n], matrix2[n][n], matrix3[n][n], colMatrix[n][1];
    ;

    // initialize
    for (int i = 0; i < n; i++)
    {
        double rowSum = 0.0;
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = (double)rand();
            rowSum += matrix[i][j];
        }

        // Normalize the row to ensure the sum is 1
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] /= rowSum;
        }
    }

    for (int i = 0; i < n; i++)
    {
        double rowSum = 0.0;
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", matrix[i][j]);
            rowSum += matrix[i][j];
        }
        printf("\n");
    }

    // Generate Row vector

    for (int i = 0; i < n; i++)
    {
        colMatrix[i][0] = 1.00 / (double)n;
    }

    printf("Row Vector:\n");

    for (int i = 0; i < n; i++)
    {

        printf("%lf ", colMatrix[i][0]);

        printf("\n");
    }

    for (int m = 0; m < p; m++)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               // matrix2[i][j] = 0;

                for (int k = 0; k < n; k++)
                {
                    matrix2[i][j] += matrix[i][k] * matrix[k][j];
                }
            }
        }
    }

    printf("Matrix after Multiplication:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
           matrix3[i][j] = 0;

            for (int k = 0; k < n; k++)
            {
                matrix3[i][j] += matrix2[i][k] * colMatrix[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");

    for (int i = 0; i < n; i++)
    {
        
            printf("%lf\n", matrix3[i][0]);
        
    }

    return 0;
}
