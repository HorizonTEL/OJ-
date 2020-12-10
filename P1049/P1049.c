#include <stdio.h>
int main()
{
	int a;
	double x,y;
	while (scanf("%d %lf %lf",&a,&x,&y)!=EOF)
	{
		printf("%lf\n",x+a%3*(int)(x+y)%2/4);
	}
	return 0;
}