#include<stdio.h>
int main()
{
	int n, max, min;
	while(scanf("%d", &n) != EOF)
	{
		int temp;
		scanf("%d", &temp);
		max = temp, min = temp;
		for(n;n>1;n--)
		{
			scanf("%d", &temp);
			if(max < temp)
				max = temp;
			if(min > temp)
				min = temp;
		}
		printf("%d %d\n", max, min);
	}
	return 0;
 } 
