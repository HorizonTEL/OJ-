#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s1[500]; 
	while (scanf("%s",s1)!=EOF)
	{
		int i;
		for (i=0;s1[i]!='\0';i++)
		{
			if (s1[i]>='A'&&s1[i]<='Z')
				s1[i]+=32;
		}
		printf("%s\n",s1);
	}
	return 0;
}