#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, temp = 0, temp1 = 0, result=0;
    printf("Enter a number: ");

    scanf("%d", &n);
    temp1 = n;

    while (temp1 != 0)
    {
        temp = temp1 % 10;
        result = result *10 + temp ;
        temp1 = temp1 / 10;
    }

    if (result == n)
    {
        printf("%d is palindrome", n);
    } else printf("%d is not a palindrome",n );

    return 0;
}
