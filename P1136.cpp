#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100], c[300], temp;
	int i, j, n, m, x = 0;
	while(scanf("%s%s",a, b) != EOF)
	{
		m = strlen (a), n = strlen (b);
        for (i = 0; i < (m /2); i++)
        {
            temp = a[i];
            a[i] = a[m-i-1];
            a[m-i-1] = temp;
        }
        for (i = 0; i < (n /2); i++)
        {
            temp = b[i];
            b[i] = b[n-i-1];
            b[n-i-1] = temp;
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
		while(c[i] == '0')
			i--;
		for(i; i>=0; i--)
			printf("%c",c[i]);
		printf("\n");
	}
	return 0;
 } 
