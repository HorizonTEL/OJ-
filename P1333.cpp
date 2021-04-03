#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char *a)
{
	char temp;
	int i, n = strlen(a);
	for (i = 0;i < n / 2;i++)
	{
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
}
int main()
{
	int i, j, n, m, y, temp;
	double re;
	char a[1000000];
	char b[1000000];
	while (scanf("%s %d", a, &y) != EOF)
	{
		if (y == 0)
			printf("1.000*10^0");
		else
		{
			strcpy(b, a);
			reverse(a);
			reverse(b);
			for (;y > 1;y--)
			{ 
				char c[1000000] = { '0' };
				n = strlen(a);
				m = strlen(b);
				for (i = 0;i < n;i++)
				{
					for (j = 0;j < m;j++)
					{
						if (j == 0)
						{
							if (c[i + j] >= '0' && c[i + j] <= '9')
								temp = (a[i] - '0') * (b[j] - '0') + (c[i + j] - '0');
							else
								temp = (a[i] - '0') * (b[j] - '0');
							c[i + j] = temp % 10 + '0';
							temp /= 10;
						}
						else
						{
							if (c[i + j] >= '0' && c[i + j] <= '9')
								temp = (a[i] - '0') * (b[j] - '0') + (c[i + j] - '0') + temp;
							else
								temp = (a[i] - '0') * (b[j] - '0') + temp;
							c[i + j] = temp % 10 + '0';
							temp /= 10;
						}
					}
					if (temp != 0)
					{
						if (c[i + j] >= '0' && c[i + j] <= '9')
							c[i + j] += temp;
						else
							c[i + j] = temp + '0';
					}
				}
				strcpy(b, c);
			}
			reverse(b);
			re = (b[0] - '0') + (b[1] - '0') * 0.1 + (b[2] - '0') * 0.01 + (b[3] - '0') * 0.001 + (b[4] - '0') / 5 * 0.0001;
			printf("%lf*10^%d\n", re,strlen(b) - 1);
		}
	}
	return 0;
}
