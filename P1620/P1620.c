#include<stdio.h>
int main()
{
	int N,i,j,k;
	int a[100];
	while(scanf("%d",&N)!=EOF)
	{
		for (i=0;i<N;i++)
			scanf("%d",&a[i]);
		k=0;
		for (i=0;i<N;i++)
		{
			for (j=0;j<N;j++)
			{
				if (i==j)
					j++;
				if (a[i]+a[j]==0)
				{
					k++;
					break;
				}
			}
		}
		printf("%d\n",k/2);
	}
	return 0;
}