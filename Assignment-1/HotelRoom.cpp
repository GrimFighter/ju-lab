#include <stdio.h>
#include <stdlib.h>
#define n 8
int main(int argc, char const *argv[])
{
    int sum1 = 0, sum2 = 0;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j < i; j++)
        {
            sum1 += arr[j];
        }

        for (int k = i+1; k <= n; k++)
        {
            sum2 += arr[k];
        }

        if (sum1 == sum2)
        {
            printf("Room No: %d", i);
            break;
        }

        sum1 = sum2 = 0;
    }

    return 0;
}
