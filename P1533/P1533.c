#include <stdio.h>
int main()
{
	char a[100];
	int i,j;
	while(scanf("%s",a)!=EOF)
	{
		i=0;
		j=0;
		while(a[j]=='*')
			j++;
		for (i=0;i<j;i++)
			printf("%c",a[i]);
		for (i=j;a[i]!='\0';i++)
		{
			if (a[i]!='*')
				printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}