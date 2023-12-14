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

int main()
{
    int r, c;
    cout << "Row 1: ";
    cin >> r;
    cout << "Column 1: ";
    cin >> c;

    int r1;
    int c1;
    cout << "Row 2: ";
    cin >> r1;
    cout << "Column 2: ";
    cin >> c1;

    if (c != r1)
    {
        cout << "Invalid dimensions" << endl;
        return 0;
    }

    int **arr = createMatrix(r, c);
    int **arr1 = createMatrix(r1, c1);
    int **arr2 = createMatrix(r, c1);

    cout << "Enter values for Array 1:" << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter values for Array 2:" << endl;
    for (size_t i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    mul(arr, arr1, arr2, r, c);

    print(arr2, r, c1);

    // Free allocated memory
    deleteMatrix(arr, r);
    deleteMatrix(arr1, r1);
    deleteMatrix(arr2, r);

    return 0;
}
