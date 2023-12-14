#include <iostream>
#include <math.h>
using namespace std;

class solution
{
public:
    void sol(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < size; k++)
                {
                    if ((pow(arr[i], 2) + pow(arr[j], 2)) == arr[k])
                    {
                        
                    }
                }
            }
        }
    }
};

main(int argc, char const *argv[])
{
    float arr1[] = {
        5,
        7,
        11,
        14,
        14,
        14,
        21, 3, 4, 5};
    return 0;
}
