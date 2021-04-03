#include<stdio.h>
#include<math.h>
int fun(int n, int m)
{
	int i, re = 1;
	for(i=2;i<sqrt(n);i++)
	{
		if(n % i == 0)
			re = re + i + n / i;
	}
	if(n % i == 0)
		re += i;
	if(re == m)
		return 1;
	else
		return 0;
}
int main()
{
	int n, m, N;
	scanf("%d", &N);
	for(N; N>0; N--)
	{
		scanf("%d %d", &m ,& n);
		if (m == 0 && n == 0)
			printf("Yes\n");
		else if (m == 0 || m == 1 || n == 0 || n == 1)
			printf("No\n");
		else if(fun(m, n) && fun(n, m))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
 } 
