#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n)
{
	unsigned long long int a = 0, b = 1, c;

	if (n == 1) return a;
	if (n == 2) return b;

	for (unsigned int i = 3; i <= n; ++i)
	{
		c = a + b;
		a = b; b = c;
	}
	return c;
}

unsigned long long int fibomax()
{
	unsigned long long int a = 0, b = 1, c = 0;

	for (; a + b > c;)
	{
		c = a + b;
		a = b; b = c;
	}
	return c;
}

void main()
{
	int n;
	printf("請輸入費式數列第幾項:");
	scanf_s("%d", &n);
	printf("Fibonacci number %d is: %llu\nMaximum fibonacci number is: %llu\n", n, fibonacci(n), fibomax());

	system("pause");
}