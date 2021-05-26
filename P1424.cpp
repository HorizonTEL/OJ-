#include<stdio.h>
#include<math.h>
int main()
{
	long long int n, m, i, j, k, p, temp;
	while(scanf("%lld %lld", &n, &m) != EOF)
	{
		long long int re[10000];
		k = 0;
		for(p = 0;;p++)
		{
			i = p, j = 0;
			if(pow(2, i) * pow(3, j) > n)
				break;
			for(;i >= 0; i--, j++)
			{
				temp = pow(2, i) * pow(3, j);
				if(temp <= n)
					re[k++] = temp;
				else
					break;
			}
		}
		for(i=0; i<k-1; i++)
		{
			for(j=0; j<k-i-1; j++)
			{
				if(re[j] > re[j+1])
				{
					temp = re[j];
					re[j] = re[j+1];
					re[j+1] = temp;
				}
			}
		}
		printf("%lld\n%lld\n", k, re[m-1]);
	}
	return 0;
}
