#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int is_prime(int x)
{
	int n = 0;
	for (n = 2; n <= sqrt(x); n++)
	{
		if (x % n == 0)
			break;
	}
	if (n > sqrt(x))
		return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
}