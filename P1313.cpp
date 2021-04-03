#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int i, j, k, n, re;
	while(gets(a)!=NULL)
	{
		re = 1;
		n = strlen(a);
		for(i=0;i<n-1;i++)
		{
			if(((a[i+1] >= 'a' &&a[i+1] <= 'z') || (a[i+1] >= 'A' &&a[i+1] <= 'Z')) && (a[i] < 'A' || (a[i] > 'Z' && a[i] < 'a') || a[i] > 'z'))
				re++;
		}
		printf("%d\n",re);
	}
	return 0;
 } 
