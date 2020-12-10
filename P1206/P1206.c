#include <stdio.h>
int main()
{
	char a[100];
	char m;
	int i,j=0;
	while(gets(a)!=NULL)
	{
		j=0;
		scanf("%c",&m);
		getchar();
		for (i=0;a[i]!='\0';i++)
		{
			if(a[i]==m)
				j++;
		}
		printf("%d\n",j);
	}
	return 0;
}