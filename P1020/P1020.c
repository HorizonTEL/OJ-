#include<stdio.h>
void findmaxmin(char a[]);
int main()
{
	int i,j=0,k=0,p,max,min,m,n;
	char a[500];
	char b[500][500];
	int c[500];
	while(gets(a)!=NULL)
	{
		findmaxmin(a);
		
	}
	return 0;
}
void findmaxmin(char a[])
{
	int i,j=0,k=0,p,max,min,m,n;

	char b[500][500];
	int c[500];
	for (i=0;a[i]!='\0';i++)
		{
			if(a[i]!=' ')
			{
				b[j][k]=a[i];
				k++;
			}
			else
			{
				b[j][k]='\0';
			    c[j]=k;
			    j++;
			    k=0;
			}
		}
		c[j]=k;
		b[j][k]='\0';
		max=c[0],min=c[0];
		for (p=0;p<=j;p++)
		{
			if(c[p]>=max)
			{
				max=c[p];
				m=p;
			}
		}
		for (p=0;p<=j;p++)
		{
			if (c[p]==max)
			{
				max=c[p];
				m=p;
				break;
			}
		}
		for (p=0;p<=j;p++)
		{
			if (c[p]<=min)
			{
				min=c[p];
				n=p;
			}
		}
		for (p=0;p<=j;p++)
		{
			if (c[p]==min)
			{
				min=c[p];
				n=p;
				break;
			}
		}
		printf("%s\n",b[m]);
		printf("%s\n",b[n]);
}
