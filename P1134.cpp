#include<stdio.h>
#include<string.h>
int main()
{
	int n, m, i, j, k, p, q;
	while(scanf("%d",&p)!=EOF)
	{
		char a[3100]={"1"}, b[3100], c[3100], temp;
		int x = 0, n = 0;
		if(p == 0)
		{
			printf("1\n");
		}
		else
		{
			for(k=1; k<= p; k++)
			{
				m = strlen (a);
				n = 0;
				q = k;
				while(q != 0)
				{
					b[n] = q % 10 + '0';
					q /= 10;
					n++;
				}
				for(i=0;i<=(m+n);i++)
        			c[i] = '0';
        		for (i = 0;i < m;i++)
				{
					x = 0;
					for (j = 0;j < n;j++)
					{
						x = (a[i] - '0') * (b[j] - '0') + (c[i + j] - '0') + x;
						c[i + j] = x % 10 + '0';
						 x /= 10;
					}
					if (x != 0)
						c[i + j] += x;
				}
				i = m + n;
				while (c[i] == '0')
					i--;
				for (j = 0;j <= i;j++)
					a[j] = c[j];	
			}
			i = m + n;
			while(c[i] == '0')
				i--;
			for(i; i>=0; i--)
				printf("%c",c[i]);
			printf("\n");
		}
	}
	return 0;
}
