#include<stdio.h>
int main()
{
	int i,j,k=0,p,q=0,m,n,l,temp;
	int a[100],b[100],d[100],e[100];
	while(scanf("%d",&m)!=EOF)
	{
		q=0;
		for (i=0;i<m;i++)
			scanf("%d",&a[i]);
		scanf("%d",&n);
		for (i=0;i<n;i++)
			scanf("%d",&b[i]);
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				if (a[i]==b[j])
				{
					d[k]=a[i];
					k++;
				}
			}
		}
		for(i=0;i<=m;i++)
		{
			l=1;
			for (j=0;j<=k;j++)
			{
				if (a[i]==d[j])
				{
					l=0;
					break;
				}
			}
			if (l)
			{
				e[q]=a[i];
				q++;
			}
		}
		for (i=0;i<q;i++)
		{
			for (j=0;j<q-i-1;j++)
			{
				if(e[j]>e[j+1])
				{
					temp=e[j];
					e[j]=e[j+1];
					e[j+1]=temp;
				}
			}
		}
		for(i=0;i<q-1;i++)
			printf("%d ",e[i]);
		printf("%d\n",e[q-1]);
	}
	return 0;
}
