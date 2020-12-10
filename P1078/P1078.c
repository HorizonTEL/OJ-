#include <stdio.h>
int main()
{
	int n,k,i,j;
	int a[100];
	while (scanf("%d%d",&n,&k)!=EOF)
	{
		j=k;
		for (i=0;i<n;i++)
			scanf("%d",&a[i]);
		for (;j<n;j++)
			printf("%d ",a[j]);
		for(i=0;i<k-1;i++)
			printf("%d ",a[i]);
		printf("%d\n",a[k-1]);
	}
	return 0;
}