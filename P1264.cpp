#include<stdio.h>
#include<string.h>
int main()
{
	char n[100], a[100];
	int i, j, k, p, r, temp, re;
	while(scanf("%d %d %s", &p, &r, n), p!=0 && r!=0)
	{
		temp = 1, re = 0;
		i = strlen(n) - 1;
		for(i; i>=0; i--)
		{
			if(n[i] >='A' && n[i] <= 'Z')
			{
				re += (n[i] - 'A' + 10) * temp;
				temp *= p;
			}
			else
			{
				re += (n[i] - '0') * temp;
				temp *= p;
			}
		}
		i = 0;
		while(re != 0)
		{
			temp = re % r;
			if(temp >= 10 && temp <= 16)
			{
				a[i] = temp - 10 + 'A';
				i++;
			}
			else
			{
				a[i] = temp + '0';
				i++;
			}
			re /= r;
		}
		i -= 1;
		for(i; i>=0; i--)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
 } 
