#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char b[10000];
	while (scanf("%d%s", &a, b) != EOF)
	{

		int re = 1, length = strlen(b), i = 0, j, temp = 1;
		a %= 1337;
		while (length != 1)
		{
			char c[10000] = { "0" };
			if ((b[length - 1] - '0') % 2)
			{
				b[length - 1] = b[length - 1] - '0' - 1 + '0';
				temp = temp * a % 1337;
			}
			i = 0;
			if (b[0] != '1')
			{
				c[i] = (b[0] - '0') / 2 + '0';
				i += 1;
			}
			for (j = 1;j < length;j++)
			{
				c[i] = ((b[j - 1] - '0') % 2 * 10 + (b[j] - '0')) / 2 + '0';
				i += 1;
			}
			a = a * a % 1337;
			strcpy(b, c);
			length = strlen(b);
		}
		i = b[0] - '0';
		for (i;i > 0;i--)
			re = re * a % 1337;
		printf("%d\n", re * temp % 1337);
	}
	return 0;
} 
