#include<stdio.h>
int fun(int num1, int num2)
{
	int a, b, temp;
	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	a = num1;
	b = num2;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main()
{
	int a, b, c, d, fenzi, fenmu, i;
	while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF)
	{
		fenzi = a * d + b * c, fenmu = b * d;
		i = fun(fenzi, fenmu);
		printf("%d/%d\n", fenzi / i, fenmu / i);
	}
	return 0;
}
