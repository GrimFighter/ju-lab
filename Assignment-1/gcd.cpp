
#include <stdio.h>


int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


int main()
{
	int a = 0, b = 0;
    printf("Enter a, b: ");
    scanf("%d %d", &a,&b);


	printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
	
	return 0;
}
