#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,k,q,m,temp,a[100];
	struct NBA
	{
		char name[100];
		char time[100];
	};
	struct NBA s[100];
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for(i=0;i<n;i++) 	
		{
			char b[100];
			j=0,k=0,m=0,q=0,a[i]=i;
			gets(b);
			q=strlen(b);
			for (j=0;j<q;j++)
			{
				if (b[j]>='0'&&b[j]<='9')
				{
					s[i].time[k]=b[j];
					k++;	
				}
				else
				{
					s[i].name[m]=b[j];
					m++;
				}
				s[i].name[m]='\0';
				s[i].time[k]='\0';		
				
			}
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if((strcmp(s[a[j]].time,s[a[j+1]].time))>0)
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if (strcmp(s[a[i]].time,s[a[i+1]].time)!=0)
				printf("%s %s\n",s[a[i]].time,s[a[i]].name);
		}
	}
	return 0;
}
