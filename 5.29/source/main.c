#include <stdio.h>
#include <stdlib.h>

int lcm(int a, int b)
{
	int c = -1;
	int a1 = a, b1 = b;

	while (c != 0)
	{
		c = a % b;

		if (c == 0) return a1 * b1 / b;
		{
			a = b; b = c;
		}
	}
}

void main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);
	printf("%d\n", lcm(a, b));

	system("pause");
}
