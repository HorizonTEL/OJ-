#include<stdio.h>
int main()
{
	int a[2010][2010];
	long long int i, j, n;
	while(scanf("%lld", &n) != EOF)
	{

		if(n == 1)
			printf("1\n");
		else
		{
			a[0][0] = 1, a[1][0] = 1, a[1][1] = 1;
			int temp = 1;
			long long int re = 3;
			for(i = 2;temp;i++)
			{
				for(j=0;j<=i;j++)
				{
					if(j == 0 || j == i)
						a[i][j] = 1;
					else
						a[i][j] = a[i-1][j-1] + a[i-1][j];
					re++;
					if(a[i][j] == n)
					{
						temp = 0;
						break;
					}
				}
			}
			printf("%lld\n", re);
		}	
	}
	return 0;
 }
