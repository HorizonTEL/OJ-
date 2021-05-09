#include<stdio.h>
#include<math.h>
int main()
{
	long long int re, n, temp;
	int k;
	scanf("%d", &k);
	for(k; k>0; k--)
	{
		temp = 0;
		scanf("%lld", &n);
		while(temp * (temp + 1) / 2 < n)
			temp++;
		temp -= 1;
		re = n - temp * (temp + 1) / 2;
		re = re % 9;
		if (re == 0)
			re = 9;
		printf("%lld\n", re);
	}
	return 0;
 } 
