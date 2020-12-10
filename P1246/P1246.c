#include <stdio.h>
#include <math.h>
double S(int a,int b, int c)
{
	double p=(a+b+c)/2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
	int a,b,c;
	while (scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if (a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0)
			printf("%.4lf\n",S(a,b,c));
		else
			printf("0\n");
	}
	return 0;
}