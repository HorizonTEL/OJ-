#include <stdio.h>
int main()
{
	int a[1000],i=0,j,max=0;
	int b[1000];
	for (j=0;j<1000;j++)
		b[j]=0;
	while(scanf("%d",&a[i]),a[i]!=-1)
		i++;
	for (j=0;j<=i;j++)
	{
		b[a[j]-1]++;
		if(a[j]>max)
			max=a[j];
	}
	for (j=0;j<max;j++)
		printf("%d %d\n",j+1,b[j]);
	return 0;
}
