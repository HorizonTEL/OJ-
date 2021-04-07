#include<stdio.h>
int main()
{
	int i, j;
	long long int b;
	double a;
	while(scanf("%lf %lld", &a, &b) != EOF)
	{
		if(b == 0)
			printf("1.000*10^0\n");
		else
		{
			double temp = 1.0;
			long long int n = 0;
			while(a / 10 > 1)
			{
				n += 1;
				a /= 10.0;
			}
			n *= b;
			while(b > 1)
			{
				if(b % 2)
				{
					temp *= a;
					while(temp / 10 > 1)
					{
						n += 1;
						temp /= 10.0;
					}
					b -= 1;
				}
				else
				{
					a *= a;
					while(a / 10 > 1)
					{
						n += (b/2);
						a /= 10.0;
					}
					b /= 2;
				}
			}
			a *= temp;
			while(a / 10 > 1)
			{
				n += 1;
				a /= 10.0;
			}
			printf("%.3lf*10^%lld\n", a ,n);
		}
	}
	return 0;
}
