#include<stdio.h>
long fun(int n)
{
	if(n==0)
		return 0;
	if(n == 1)
		return 3;
	else if(n==2)
		return 9;
	else
		return 2 * fun(n-1) + fun(n-2); 
}
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
		printf("%ld\n", fun(n));
	return 0;
}
