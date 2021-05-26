#include<stdio.h>
int fun(int a, int n)
{
	int i, re = 0;
	for(i=1; i<=n; i++)
	{
		if(a % i == 0)
			re++;
	}
	return re;
}
int main()
{
	int n, k, i;
	while(scanf("%d %d", &n , &k) != EOF)
	{
		int j = 0;
		int re[1100];
		for(i = 0; i< n; i++)
		{
			if(fun(i+1, k) % 2 == 0)
				re[j++] = i + 1;
		}
		for(i=0; i< j-1; i++)
			printf("%d ", re[i]);
		printf("%d\n", re[i]);
	}
	return 0;
}
