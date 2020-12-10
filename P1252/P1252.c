#include<stdio.h>
int main()
{
	int n,i,j,k;
	while(scanf("%d",&n)!=EOF)
	{
		for (i=n,j=1;i>1;i--,j++)
		{
			for (k=1;k<j;k++)
				printf("%d ",i);
			for (k=i;k>=2;k--)
				printf("%d ",k);
			printf("1\n");
		}
		for (i=1;i<n;i++)
			printf("1 ");
		printf("1\n");
	}
	return 0;
}