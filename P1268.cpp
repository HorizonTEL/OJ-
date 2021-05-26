#include<stdio.h>
int main()
{
	long long int n, i, j, max;
	while(scanf("%lld", &n) != EOF)
	{
		long long int a[10100], dp[10100];
		for(i=0; i<n; i++)
			scanf("%lld", &a[i]);
		dp[0] = a[0], max = a[0];
		for(i=1; i<n; i++)
		{
			if(dp[i-1] > 0)
				dp[i] = a[i] + dp[i-1];
			else
				dp[i] = a[i];
			if(dp[i] > max)
				max = dp[i];
		}
		printf("%lld\n", max);
	}
	return 0;
} 
