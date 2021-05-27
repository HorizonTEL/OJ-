#include<stdio.h>
int main()
{
	int n, i, j, k, t, temp, x, p, q;
	while(scanf("%d", &n) != EOF)
	{
		temp = 9;
		int a[3000][30] = {0};
		for(i=0; i<9; i++)
			a[i][0] = i+1;
		for(i = 2; i<= n; i++)
		{
			k = 0;
			int b[3000][30], c[3000];
			for(j = 0; j < temp; j++)
			{
				for(t = 0; t <= 9; t++) // 个位加上的数(t) 
				{
					x = 0;
					for(p = 0; p < i - 1; p++)
						x = (x * 10 + a[j][p]) % i; 
					x = (x * 10 + t) % i;
					if(x == 0)
					{
						for(q = 0; q < i-1; q++)
							b[k][q] = a[j][q];
						b[k][q] = t;
						k++;
						while((t + i ) / 10 == 0)
						{
							t += i;
							for(q = 0; q < i-1; q++)
								b[k][q] = a[j][q];
							b[k][q] = t;
							k++;
						}
						break;
					}
					else
					{
						t = i - x;
						if(t < 10)
						{
							for(q = 0; q < i-1; q++)
								b[k][q] = a[j][q];
							b[k][q] = t;
							k++;
							while((t + i ) / 10 == 0)
							{
								t += i;
								for(q = 0; q < i-1; q++)
									b[k][q] = a[j][q];
								b[k][q] = t;
								k++;
							}
							break;
						}
					}
				}
			}
			for(j = 0; j < k; j++)
			{
				for(p = 0; p < i; p++)
					a[j][p] = b[j][p];
			}
			temp = k;
		}
		for(i = 0; i < temp; i++)
		{
			for(j = 0; j < n; j++)
				printf("%d", a[i][j]);
			printf("\n");
		}
	}
	return 0;
}
