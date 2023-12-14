/*Program 1
SAYANTAN MONDAL
ROLL: 002310503004*/


#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int amount, temp, temp1, c1 = 0, c2 = 0, c5 = 0, c10 = 0, c20 = 0, c50 = 0, c100 = 0;
    printf(" Enter amount: ");
    scanf("%d", &amount);
    temp = amount;
    while (temp > 0)
    {
        c100 = temp / 100;
        temp = temp % 100;

        c50 = temp / 50;
        temp = temp % 50;

        c20 = temp / 20;
        temp = temp % 20;

        c10 = temp / 10;
        temp = temp % 10;

        c5 = temp / 5;
        temp = temp % 5;

        c2 = temp / 2;
        temp = temp % 2;

        c1 = temp / 1;
        temp = temp % 1;
    }
    temp1 = c100 + c50 + c20 + c10 + c5 + c2 + c1;
    printf("100 Rs Note: %d\n 50 Rs Note: %d\n 20 Rs Note: %d\n 10 Rs Note: %d\n 5 Rs Note: %d\n 2 Rs Note: %d\n 1 Rs Note: %d\n No of Notes: %d\n", c100, c50, c20, c10, c5, c2, c1, temp1);

    return 0;
}
