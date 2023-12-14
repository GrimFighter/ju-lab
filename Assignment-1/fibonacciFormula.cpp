#include <stdio.h>
#include <math.h>

double fibo(int n)
{
    double num1 = 0, num2 = 1, temp = 0;

    for (double i = 0.00; i < n; i++)
    {
        printf("%lf ", num1);

        temp = num1;
        num1 = num2;
        num2 = temp + num1;
    }

    return num1;
}

    int main(int argc, char const *argv[])
    {
        double n = 0;
        printf("Enter a number: ");
        scanf("%lf", &n);

        double result1 = 0, result2 = 0;

        result1 =( 1.00 / sqrt(5.00) * pow(((1.00 + sqrt(5.00)) / 2.00), n) - 1.00 / sqrt(5.00) * pow(((1.00 - sqrt(5.00)) / 2.00), n));

        result2 = fibo(n);

        printf("%lf %lf", result1,result2);

        if ((result1 == result2))
        {
            printf("%lf == %lf", result1,result2);
        }
        
        return 0;
    }
