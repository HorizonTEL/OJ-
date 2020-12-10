#include <stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n,p=1,q;
	char b[100];
	scanf("%d",&n);
	getchar();
	for (q=0;q<n;q++)
	{
		p=1;
		gets(b);
		i=strlen(b);
		for (j=0,k=i-1;j<=i/2,k>i/2;j++,k--)
		{
			if(b[j]!=b[k])
			{
				p=0;
				break;
			}
		}
		if(p==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}