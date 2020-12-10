#include<stdio.h>
int main()
{
	int m,n,i;
	int a=-1,b=-1;
	while (scanf("%d %d",&m,&n)!=EOF)
	{
		for (i=0;i<=m;i++)
		{
			if ((4*m-2*i)==n)
			{
				a=i,b=m-i;
				break;
			}
			a=-1,b=-1;
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}