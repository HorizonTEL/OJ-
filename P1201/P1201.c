#include <stdio.h>
int fun(int N,int M)
{
	int a;
	for (a=1;a<M&&a<N;a++)
	{
		if (N%a==0&&N%(M-a)==0)
			return a;
	}
	return 0;
}
int main()
{
	int N,M,K,i,a;
	scanf("%d",&K);
	for (i=0;i<K;i++)
	{
		scanf("%d %d",&N,&M);
		if(fun(N,M))
			printf("%d\n",fun(N,M));
		else
			printf("-1\n");
	}
	return 0;
}
