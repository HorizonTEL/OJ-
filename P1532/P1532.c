#include <stdio.h>
#include<string.h>
int main()
{
	int i,j,k,p=1,q;
	char b[10000];
	while(gets(b)!=NULL )
	{
		p=1;                            
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
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}