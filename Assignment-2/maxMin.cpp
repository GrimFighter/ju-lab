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

void findMax(int *arr, int n)
{
    int l = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }

    cout<<"Largest:"<<l<<endl;
}

void findMin(int *arr, int n)
{
    int s = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < s)
        {
            s = arr[i];
        }
    }

    cout<<"Smallest:"<<s<<endl;
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;
}

int main(int argc, char const *argv[])
{
    printf("Enter array size: ");
    int size;
    scanf("%d", &size);
    getchar();

    int *arr = createArr(size);
    printArr(arr, size);
    findMax(arr,size);
    findMin(arr,size);
    return 0;
}
