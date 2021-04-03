#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long int i, n, re, temp = 81 * 91, num = 0, x, min, max;
	char a[100];
	while(scanf("%s",a) != EOF)
	{
		num = 0;
		n = strlen(a);
		x = pow(10, n-1);
		min = x / temp + 1;
		max = x * 10 /temp;
		for(i=min; i <= max; i++)
		{
			if(((temp * i) / 100) % 10 == 1)
			{
				if(num == 0)
				{
					num = 1;
					re = temp * i;
				}
				else
				{
					num = 2;
					break;
				}
			}
		}
		if(num == 1)
			printf("%lld\n",re);
		else
			printf("wrong\n");
	}
	return 0;
}
