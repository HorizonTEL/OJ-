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
int main()
{
	int i,j,n;
	while(scanf("%d",&n)!=EOF)
	{
		for (j=2;j<=n/2;j++)
		{
			if (fun(j)==0&&fun(n-j)==0)
			{
				printf("%d+%d\n",j,n-j);
				break;
			}
		}
	}
	return 0;
}
