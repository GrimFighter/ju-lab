#include <iostream>
#include <cstdlib>

using namespace std;

int **createMatrix(int r, int c)
{
    int **arr = new int *[r];
    for (size_t i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    }
    return arr;
}

void print(int **arr, int r, int c)
{
    cout << "Matrix: " << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void mul(int **arr, int **arr1, int **arr2, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr2[i][j] = 0;

            for (int k = 0; k < c; k++)
            {
                arr2[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
}

void deleteMatrix(int **arr, int r)
{
    for (size_t i = 0; i < r; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void transpose(int** arr, int** arr1, int r, int c)
{
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            arr1[j][i] = arr[i][j];
        }
    }
}
