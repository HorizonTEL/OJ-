#include<stdio.h>
int main()
{
    long long a[100][100],b[100][100],c[100][100];
    int i,j,n,m,p;
	long long temp;
    while (scanf("%d",&n)!=EOF)
    { 
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				c[i][j]=a[i][j];
			}
		}
		scanf("%d",&m);
		for (p=0;p<3;p++)
		{
			for (i=0;i<n;i++)
			{
				for (j=0;j<n;j++)
					b[i][j]=a[j][i];
			}
			for (j=0;j<n;j++)
			{
				for (i=0;i<n;i++)
					a[i][j]=b[i][n-1-j];
			}
			for (i=0;i<n;i++)
			{
				for (j=0;j<n;j++)
					c[i][j]+=a[i][j];
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
				c[i][j]=(m+1)/4*c[i][j];
		}
		for (p=0;p<(m+1)%4;p++)
		{
			for (i=0;i<n;i++)
			{
				for (j=0;j<n;j++)
					b[i][j]=a[j][i];
			}
			for (j=0;j<n;j++)
			{
				for (i=0;i<n;i++)
					a[i][j]=b[i][n-1-j];
			}
			for (i=0;i<n;i++)
			{
				for (j=0;j<n;j++)
					c[i][j]+=a[i][j];
			}
		}
		for (i=0;i<n;i++)
		{
			for (j=0;j<n-1;j++)
				printf("%lld ",c[i][j]);
			printf("%lld\n",c[i][j]);
		}
	} 
}