#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int *createArr(int n)
{
    int *arr = (int *)calloc(n, sizeof(int));

    cout << "Enter elwments:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

void sortArr(int *arr, int n)
{
    sort(arr, arr + n, greater<int>());
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    printf("Enter array size: ");
    int size;
    scanf("%d", &size);
    getchar();

    int *arr = createArr(size);
    sortArr(arr, size);
    printArr(arr, size);

    return 0;
}
