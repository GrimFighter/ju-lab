#include <stdio.h>
#include <stdlib.h>

void ferCon(float n)
{
    float result = n * (9.0 / 5.0) + 32.0;
    printf("%.2f Degree Celsius = %.2f Fahrenheit\n", n, result);
}

void celCon(float n)
{
    float result = (n - 32.0) * (5.0 / 9.0);
    printf("%.2f Degree Fahrenheit = %.2f Celsius\n", n, result);
}

int main(int argc, char const *argv[])

{
    int choice, val;

    printf("Options: \n1. Celcius to Ferenhite\n2. Ferenhite to Celcius\n3. Exit\n..................\n");
     printf("Enter Choice: ");
    scanf("%d", &choice);
    getchar();

    printf("Enter Value: ");
    scanf("%d", &val);
    printf("\n");



    

    switch (choice)
    {
    case 1:
        ferCon(val); break;
    case 2:
        celCon(val); break;
    case 3:
        printf("Program Exited");

    default:
        printf("Invalid Input");
        break;
    }
    // ferCon(100.00);
    // celCon(212.00);

    return 0;
}
