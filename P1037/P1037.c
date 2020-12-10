#include <stdio.h>
int main()
{
	int n,i,sum=0;
	int a[1000];
	while (scanf("%d",&n)!=EOF)
	{
		for (i=0;i<n;i++)
			scanf("%d",&a[i]);
		for (i=0;i<n;i++)
			sum+=a[i];
		printf("%d\n",sum);
	}
	return 0;
}