#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	char s[30][100];
	char k[30];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) 
		gets(s[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i],s[j])>0)
			{
				strcpy(k,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],k);
			}
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i],"China")!=0)
			puts(s[i]);
	}
	puts("China");
}