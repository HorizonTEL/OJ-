#include<stdio.h>
int apple(int m, int n)
{
	if(m == 0  || n == 1)
		return 1;
	if(m < n)
		return apple(m, m);
	return apple(m, n-1) + apple(m-n, n);
 } 
 
 int main()
 {
 	int m, n;
 	while(scanf("%d %d", &m, &n) != EOF)
 		printf("%d\n", apple(m, n));
 	return 0;
 }
