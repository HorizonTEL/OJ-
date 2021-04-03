#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000],t[100000];
	int i, j, k, m, n;
	while(scanf("%s %s",s, t)!= EOF)
	{
		int temp = 0;
		m = strlen(s);
		n = strlen(t);
		for(i=0;i<=n-m;i++)
		{
			j = 0;
			if(t[i] == s[j])
			{
				while(i < n && j < m)
				{
					if(t[i] == s[j])
						j++;
					i++;
				}
			}
			if(j == m)
			{
				printf("Yes\n");
				temp = 1;
			}
		}
		if(temp == 0)
			printf("No\n");
	}
	return 0;
 } 
