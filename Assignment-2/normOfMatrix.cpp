#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int **createMatrix(int r, int c)
{
    int **arr = (int **)calloc(r, sizeof(int *));
    for (size_t j = 0; j < c; j++)
    {
        arr[j] = (int *)calloc(c, sizeof(int));
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

void norm(int **arr, int r, int c)
{
    float sum = 0;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            sum += (float)arr[i][j] * (float)arr[i][j];
        }
    }

    cout << "Norm: " << sqrt(sum) << endl;
}

int main(int argc, char const *argv[])
{
    int r, c;
    cout << "Row: ";
    cin >> r;
    cout << "Column: ";
    cin >> c;

    int **arr = createMatrix(r, c);

    cout << "Enter values:" << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    print(arr, r, c);
    norm(arr, r, c);

    return 0;
}
