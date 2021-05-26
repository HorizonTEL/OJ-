#include<stdio.h>
int fun(int m, int n)
{
	if(m == 1)
		return 0;
	else
		return (fun(m-1, n) + n) % m;
}
int main()
{
	int m, n;
	while(scanf("%d %d", &m, &n) != EOF)
		printf("%d\n", fun(m, n) + 1);
	return 0;
}
