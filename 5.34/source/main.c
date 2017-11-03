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
	printf("請輸入要乘的數字:");
	scanf_s("%f", &a);
	printf("請輸入要乘的次數:");
	scanf_s("%d", &b);
	printf("答案為");
	printf("%f\n", integerPower(a, b));

	system("pause");
	return 0;
}
