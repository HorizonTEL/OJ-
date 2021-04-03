#include<stdio.h>
int main()
{
	int n, i, j;
	while(scanf("%d", &n) != EOF)
	{
		while(n>4)
		{
			printf("%d,%d-->%d,%d\n",n, n+1, 2*n+1, 2*n+2);
			printf("%d,%d-->%d,%d\n",2*n-1, 2*n, n, n+1);
			n--;
		}
		printf("4,5-->9,10\n8,9-->4,5\n2,3-->8,9\n7,8-->2,3\n1,2-->7,8\n");
	}
	return 0;
}
