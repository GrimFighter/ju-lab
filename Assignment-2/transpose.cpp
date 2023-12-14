#include <iostream>
#include <cstdlib>

using namespace std;

int** createMatrix(int r, int c)
{
    int** arr = new int*[r];
    for (size_t i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    }
    return arr;
}

void print(int** arr, int r, int c)
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

void deleteMatrix(int** arr, int r)
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
    cout << "Row: ";
    cin >> r;
    cout << "Column: ";
    cin >> c;

    int r1 = c;
    int c1 = r;

    int** arr = createMatrix(r, c);
    int** arr1 = createMatrix(r1, c1);

    cout << "Enter values:" << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    transpose(arr, arr1, r, c);
    print(arr1, r1, c1);

    // Free allocated memory
    deleteMatrix(arr, r);
    deleteMatrix(arr1, r1);

    return 0;
}
