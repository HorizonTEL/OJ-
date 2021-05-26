#include<stdio.h>
int main()
{
	long long int a[50010], n, t, i, j, temp;
	while(scanf("%lld %lld", &n, &t) != EOF)
	{
		for(i=0; i<n; i++)
			scanf("%lld", &a[i]);
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		i = 0;
		while(t >= 0 && i < n)
			t -= a[i++];
		if(t > 0)
			i++; 
		printf("%lld\n", i-1);
	}
	return 0;
}
