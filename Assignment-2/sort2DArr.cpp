#include <iostream>
#include <cstdlib>
#include <algorithm>

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

void sortArr(int **arr, int r, int c)
{
     int *flatArray = new int[r * c];
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            flatArray[i * c + j] = arr[i][j];
        }
    }

    // Sort the 1D array
    sort(flatArray, flatArray + r * c);

    // Reshape the sorted 1D array back into a matrix
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            arr[i][j] = flatArray[i * c + j];
        }
    }

    delete[] flatArray;
}

void deleteMatrix(int **arr, int r)
{
    for (size_t i = 0; i < r; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

void sum(int **arr, int **arr1, int **arr2, int r, int c)
{
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            arr2[i][j] = arr[i][j] + arr1[i][j];
        }
    }
}

int main()
{
    int r, c;
    cout << "Row: ";
    cin >> r;
    cout << "Column: ";
    cin >> c;

    int **arr = createMatrix(r, c);
    int **arr1 = createMatrix(r, c);
    int **arr2 = createMatrix(r, c);

    cout << "Enter values for Array 1:" << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter values for Array 2:" << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    sortArr(arr, r, c);
    print(arr, r, c);
    sortArr(arr1, r, c);
    print(arr1, r, c);
    sum(arr, arr1, arr2, r, c);

    // print(arr, r, c);
    // print(arr1, r, c);

    sortArr(arr2, r, c);
    print(arr2, r, c);

    // Free allocated memory
    deleteMatrix(arr, r);
    deleteMatrix(arr1, r);
    deleteMatrix(arr2, r);

    return 0;
}