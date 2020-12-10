#include <stdio.h>
int main()
{
	int a1,d,n;
	while (scanf("%d %d %d",&a1,&d,&n)!=EOF)
	{
		printf("%d\n",a1*n+n*(n-1)/2*d);
	}
}