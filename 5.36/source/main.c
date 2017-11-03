#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int start, int dest, int reg)
{
	if (n == 1) printf("%d -> %d\n", start, dest);
	else
	{
		hanoi(n - 1, start, reg, dest);
		printf("%d -> %d\n", start, dest);
		hanoi(n - 1, reg, dest, start);
	}
}

void main()
{
	int n;

	scanf_s("%d", &n);
	hanoi(n, 1, 3, 2);
	system("pause");
}
