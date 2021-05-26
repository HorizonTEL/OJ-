#include<stdio.h>
int main()
{
	int n, i, j;
	while(scanf("%d", &n) != EOF)
	{
		int re[150][150], temp;
		for(j=0; j<n; j++)
		{
			if(j%2 == 0)
			{
				temp = j * n + 1;
				for(i = 0; i < n; i++)
					re[i][j] = temp++;
			}
			else
			{
				temp = (j+1) * n;
				for(i=0; i<n; i++)
					re[i][j] = temp--;
			}
		}
		for(i=0; i<n ;i++)
		{
			for(j=0; j< n; j++)
				printf("%d ", re[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
