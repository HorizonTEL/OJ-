#include <stdio.h>
int main()
{
	int m,n,k,j,i,a[100];
	double sum=0,p=0;
	scanf("%d",&m);
	for (i=0;i<m;i++)
	{
		p=0,sum=0;
		scanf("%d %d",&k,&n);
		for (j=0;j<k;j++)
		{
			scanf("%d",&a[j]);
			if(n<a[j])
			{
				sum+=a[j];
				p++;
			}
		}
		if(sum==0)
			printf("-1\n");
		else
			printf("%.2lf\n",sum/p);
	}
	return 0;
}