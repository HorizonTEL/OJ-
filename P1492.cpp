#include<stdio.h>
int main()
{
	int n, k, year;
	while(scanf("%d %d", &n, &k) != EOF)
	{
		if(n <= k)
			printf("Impossible\n");
		else
		{
			if(200 % (n-k))
				year = 200 / (n-k) + 1;
			else
				year = 200 / (n-k);
			if (year <= 20)
				printf("%d\n", year);
			else
				printf("Impossible\n");
		}
	}
	return 0;
} 
