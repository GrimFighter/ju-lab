#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void genPT(int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t i = 0; i < n-1; i++)
        {
            cout<<" ";
        }
        
        for (size_t j = 0; j <= i; j++)

            printf(" %d", (int)tgamma(i + 1) / ((int)tgamma(i + 1 - j) * (int)tgamma(j + 1)));
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{
    int n = 0;
    cout << "Enter number of rows: ";
    cin >> n;
    genPT(n);
    return 0;
}
