#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

void printArr(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n+1; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

void insert(vector<int> &v, int key)
{
    sort(v.begin(), v.end());

    int index = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (key < v[i])
        {
            index = i;
            break;
        }
    }

    for (int i = v.size() ; i >= index; i--)
    {
        v[i] = v[i - 1];
    }

    v[index] = key;

    printArr(v);
}

int main(int argc, char const *argv[])
{
    printf("Enter array size: ");
    int size, key;
    cin >> size;
    vector<int> v(size);

    cout << "Enter elements:";

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    cout << "Key: ";
    cin >> key;
    cout << endl;

    insert(v, key);

    return 0;
}
