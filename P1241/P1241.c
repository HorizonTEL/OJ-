#include <stdio.h>
int main()
{
	char a[100];
	int i=0,j,n;
	while(scanf("%s",a)!=EOF)
	{
		i=0;
		n=strlen(a);
		j=n-1;
		while(a[j]=='*')
		{
			i++;
			j--;
		}
		for (j=0;j<n-i;j++)
		{
			if (a[j]!='*')
				printf("%c",a[j]);
		}
		for (j=n-i;j<n;j++)
			printf("%c",a[j]);
		printf("\n");
	}
	return 0;
}