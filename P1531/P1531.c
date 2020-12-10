#include <stdio.h>
int main()
{
	int i,j,n,p,temp;
	char a[100][100];
	int b[100];
	scanf("%d",&n);
	getchar();
	for (i=0;i<n;i++)
	{
		gets(a[i]);
		b[i]=i;
	}
	for (i=0;i<n-1;i++)
	{
		for (p=0;p<n-i-1;p++)
		{	
			j=0;
			while((a[b[p]][j]==a[b[p+1]][j]))
				j++;
			if (a[b[p]][j]>a[b[p+1]][j])
			{
				temp=b[p];
				b[p]=b[p+1];
				b[p+1]=temp;
			}
		}
	}
	for (i=0;i<n;i++)
		printf("%s\n",a[b[i]]);
	return 0;
}
