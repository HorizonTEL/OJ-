#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n % 7)
			printf("%d\n", n % 7);
		else
			printf("7\n");
	}
	return 0;
}
