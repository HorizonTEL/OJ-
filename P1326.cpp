#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, temp, m, n, t;
	int xiaoshu[100];
	while (scanf("%d/%d %d", &m, &n, &t) != EOF)
	{
		temp = m / n;
		for (i = 0;i < t;i++)
		{
			m = m % n;
			if (m == 0)
				break;
			m *= 10;
			xiaoshu[i] = m / n;
		}
		if (i == 0)
			printf("%d\n", temp);
		else
		{
			printf("%d.", temp);
			for (j = 0;j < i;j++)
				printf("%d", xiaoshu[j]);
			printf("\n");
		}
	}
	return 0;
}
