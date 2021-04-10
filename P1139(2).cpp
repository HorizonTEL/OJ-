#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int re[501] = {0}, i, j, sum = 1;
		re[0] = 1;
		for(i=1;i<=n;i++)
		{
			int temp = 0;
			for(j=0;j<sum;j++)
			{
				temp += re[j] * 2;
				re[j] = temp % 10;
				temp  /= 10;
			}
			if(temp && sum < 500)
			{
				re[j] = temp;
				sum++;
			}
		}
		re[0] -= 1;
		for(i=499;i>=0;i--)
			printf("%d", re[i]);
		printf("\n");
	}
	return 0;
 } 
