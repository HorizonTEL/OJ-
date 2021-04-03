#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10], c[10];
	int i, j, k, p, q, r, t, temp, x, y;
	scanf("%d", &t);
	for(t;t>0;t--)
	{
		x = 1;
		scanf("%s %s %s", a, b, c);
		for(j=2;j<=16;j++)
		{
			y = 0;
			p = 0, q = 0, r = 0;
			temp = 1;
			k = strlen(a) - 1;
			for(k;k>=0;k--)
			{
				if(a[k] - '0' >= j)
				{
					y = 1;
					break;
				}
				p += (a[k] - '0') * temp;
				temp *= j;
			}
			temp = 1;
			k = strlen(b) - 1;
			for(k;k>=0;k--)
			{
				if(b[k] - '0' >= j)
				{
					y = 1;
					break;
				}
				q += (b[k] - '0') * temp;
				temp *= j;
			}
			temp = 1;
			k = strlen(c) - 1;
			for(k;k>=0;k--)
			{
				if(c[k] - '0' >= j)
				{
					y = 1;
					break;
				}
				r += (c[k] - '0') * temp;
				temp *= j;
			}
			if(y == 0 && p * q == r)
			{
				printf("%d\n",j);
				x = 0;
				break;
			}	
		}
		if(x)
			printf("0\n");
	} 
	return 0;
}
