#include<stdio.h>
#include <string.h>
int main()
{
	int p,i,j,k,m,n;
	int s1[40]={0},c[40]={0};
	while(scanf("%d",&p)!=EOF)
	{	
		char a[40]={'1'};
		for(j=1;j<p;j++)
		{
			i=strlen(a);
			for (m=0;m<i;m++)
				s1[m]=a[m]-'0';
			c[0]=(s1[i-1]*2)%10+1;
			for (m=i-2,n=1;m>=0;m--,n++)
				c[n]=(s1[m]*2)%10+(s1[m+1]*2)/10;
			n-=1;
			if (s1[0]*2>=10)
			{
				n+=1;
				c[n]=(s1[0]*2)/10;
			}
			for (i=0,k=n;i<=n,k>=0;i++,k--)
				a[i]=c[k]+'0';
			a[i]='\0';
		}
		printf("%s\n",a);
	}
	return 0;
}