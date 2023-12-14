#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <unordered_map>
#include<math.h>
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

double mean(int *arr, int n)
{
    int sum = 0;
    double mean;

    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    mean = (double)sum / (double)n;

    cout << "Mean: " << mean << endl;

    return mean;
}

void median(int *arr, int n)
{
    stable_sort(arr, arr + n);

    double median = 0;

    if (n % 2 == 0)
    {
        median = (double)(arr[(n / 2) - 1] + arr[(n / 2)]) / (double)2;
    }

    else
        median = (double)arr[n / 2];

     cout << "Median: " << median << endl;
}

void mode(int *arr, int n)
{
    unordered_map<int, int> umap;

    for (size_t i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    int freq = INT_MIN, index;

    for (size_t i = 0; i < n; i++)
    {
        if (umap[arr[i]] > freq)
        {
            freq = umap[arr[i]];
            index = i;
        }
    }

    cout<<"Element: "<<arr[index]<<" "<<"Freq: "<<freq<<endl;
}

void sD(int* arr, int n, int mean)
{   int sd1;
    
  for(int i = 0; i < n; ++i) {
    sd1 += pow(arr[i] - mean, 2);
  }

  cout<<"Standard Deviation: "<< sqrt(sd1 / n)<<endl;
}

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    printf("Enter array size: ");
    int size;
    scanf("%d", &size);
    getchar();

    int *arr = createArr(size);
    printArr(arr, size);

   double mean1= mean(arr,size);
    median(arr,size);
    mode(arr,size);
    sD(arr,size,mean1);

   
    return 0;
}