#include<stdio.h>
#include<math.h>
int main()
{
	int b[1001], n, i, j, k;
	while(scanf("%d", &n) != EOF)
	{
		j = 0;
		for(i=1;i<=sqrt(n); i++)
		{
			b[j] = i * i;
			j++;
		}
		j -= 1;
		for(i=0;i<j;i++)
			printf("%d ", b[i]);
		printf("%d\n", b[i]);
	}
	return 0;
 } 
