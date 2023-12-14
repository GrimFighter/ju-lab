

#include <stdio.h>
#include <math.h>
int isPrime(int n, int count)
{

    for (int i = 2; i < n; i++)
    {
        int flag = 0;
        for (int k = 2; k <= sqrt(i); k++)
        {
            if (i % k == 0)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            count++;
            printf("%d is a prime number\n", i);
        }
    }

    return count;
}
int main(int argc, char const *argv[])
{   int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int count = 0;
    count = isPrime(n, count);

    printf("\nTotal prime numbers: %d ", count);

    return 0;
}
