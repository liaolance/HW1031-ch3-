#include <stdio.h>
#include <stdlib.h>

float integerPower(float base, int exponent)
{
	if (exponent == 1) return base;
	else return base * integerPower(base, exponent - 1);
}

int main()
{
	float a; int b;
	printf("�п�J�n�����Ʀr:");
	scanf_s("%f", &a);
	printf("�п�J�n��������:");
	scanf_s("%d", &b);
	printf("���׬�");
	printf("%f\n", integerPower(a, b));

	system("pause");
	return 0;
}
