#include "add.cpp"

int main(int argc, char const *argv[])
{
    int r, c;
    cout << "Row: ";
    cin >> r;
    cout << "Column: ";
    cin >> c;

    int** arr = createMatrix(r, c);
    int** arr1 = createMatrix(c, r);
    int** arr2 = createMatrix(r, r);

    cout << "Enter values:" << endl;
    for (size_t i = 0; i < r; i++)
    {
        for (size_t j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    transpose(arr, arr1, r, c);
    mul(arr,arr1,arr2,r,c);
    print(arr2,r,r);
   
    return 0;


}
