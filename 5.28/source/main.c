#include <stdio.h>
#include <stdlib.h>

char alpha(char a)
{
	return a + 0x20;
}

void main()
{
	char a;

	scanf_s("%c", &a, 1);
	printf("%c\n", alpha(a));

	system("pause");
}
