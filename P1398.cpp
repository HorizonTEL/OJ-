#include<stdio.h>
int main()
{
	int n, i, j;
	while(scanf("%d", &n) != EOF)
	{
		if(n == 1)
			printf("1\n");
		else
		{
			int a[510][510], temp = 2, i = 0, j = 1;
			a[0][0] = 1;
			while(temp <= n * n)
			{
				while(temp <= n * n && j >= i)
					a[i++][j] = temp++;
				i--, j--;
				while(temp <= n * n && j >= 0)
					a[i][j--] = temp++;
				j++, i++;
				while(temp <= n * n && j <= i)
					a[i][j++] = temp++;
				j--, i--;
				while(temp <= n * n && i >= 0)
					a[i--][j] = temp++;
				i++, j++;
			}
			for(i=0; i<n; i++)
			{
				for(j=0; j<n-1; j++)
					printf("%d ", a[i][j]);
				printf("%d\n", a[i][j]);
			}
		}
	}
	return 0;
}
