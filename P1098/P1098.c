#include <stdio.h>
#include <math.h>
int fun(int a)
{
	int i;
	if(a==2||a==3)
		return 0;
	for (i=2;i<=sqrt(a);i++)
	{
		if (a%i==0)
			return 1;
	}
	return 0;
}
int factor(int n)
{
	int i;
	for (i=2;i<=n;i++)
		{
			if (n%i==0&&fun(i)==0)
				return i;
	}
}
int main()
{
	int n,i,j=0;
	int a[100]={0};
	while (scanf("%d",&n)!=EOF)
	{
		j=0;
		while (n!=1)
		{
			a[j]=factor(n);
			n/=a[j];
			j++;
		}
		for (i=0;i<j-1;i++)
			printf("%d ",a[i]);
		printf("%d\n",a[j-1]);
	}
	return 0;
}