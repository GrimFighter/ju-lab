#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int *createArr(int n)
{
    int *arr = (int *)calloc(n, sizeof(int));

    cout << "Enter elwments: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void searchArr(int *arr, int n, int key)
{
    for (size_t i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "Key found at index: " << i << endl;
            return;
        }
    }
    cout << "Key not found" << endl;
}

int main(int argc, char const *argv[])
{
    printf("Enter array size: ");
    int size, key;
    cin >> size;
    cout << endl;
    int *arr = createArr(size);
    printf("Enter key: ");
    cin >> key;
    cout << endl;

    // printArr(arr, size);
    searchArr(arr, size, key);

    return 0;
}
