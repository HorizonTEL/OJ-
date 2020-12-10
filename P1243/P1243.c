#include <stdio.h>
#include<string.h>
int main()
{
	int n,i,j,k,temp,a[100];
	struct qinao
	{
		int time;
		char country[100];
		int numbers;
		char continent[100];
	};
	struct qinao s[100];
	while(scanf("%d\n",&n)!=EOF)
	{
		for(i=0;i<n;i++) 
		{
			scanf("%d %s %d %s",&s[i].time,&s[i].country,&s[i].numbers,&s[i].continent);
			a[i]=i;
			if (strcmp(s[i].country,"China")==0)
				k=a[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(strcmp(s[a[j]].country,s[a[j+1]].country)>0)
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(strcmp(s[a[i]].country,"China")!=0)
				printf("%d %s %d %s\n",s[a[i]].time,s[a[i]].country,s[a[i]].numbers,s[a[i]].continent);
		}
		printf("%d %s %d %s\n",s[k].time,s[k].country,s[k].numbers,s[k].continent);
	}
	return 0;
}
