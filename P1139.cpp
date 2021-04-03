#include<stdio.h>
int main()
{
	char a[500], b[500];
	int i, j, k, m, n, temp, max;
	while(scanf("%d", &k)!= EOF)
	{
		for(i=0;i<500;i++)
		{
			a[i] = '0';
			b[i] = '0';
		}
		a[0] = '1', b[0] = '1';
		m = 1, n = 1;
		for(k; k>1; k--)
		{
			temp = 0;
			for(i=0;i<m;i++)
			{
				temp = (a[i] - '0') * 2 + temp;
				a[i] = temp % 10 + '0';
				temp /= 10;
			}
			if(temp && i < 500)
			{
				a[i] = temp + '0';
				i++;
			}
			m = i;
			temp = 0;
			if(m >n)
				max = m;
			else
				max = n;
			for(i=0; i<max; i++)
			{
				temp = a[i] - '0' + b[i] - '0' + temp;
				b[i] = temp % 10 + '0';
				temp /= 10;
			}
			if(temp && i < 500)
			{
				b[i] = temp + '0';
				i++;
			}
			n = i;
		}
		for(i=499; i>=0; i--)
			printf("%c",b[i]);
		printf("\n");
	}
	return 0;
}
