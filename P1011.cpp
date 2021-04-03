#include<stdio.h>
int main()
{
	int a, i, j, n;
	int b[20];
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		j = 0;
		scanf("%d", &a);
		while (a != 0)
		{
			b[j] = a % 2;
			a /= 2;
			j++;
		}
		j -= 1;
		while (j != 0)
		{
			printf("%d", b[j]);
			j--;
		}
		printf("%d\n", b[j]);
	}
	return 0;
}
