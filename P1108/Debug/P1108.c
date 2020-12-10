#include <stdio.h>
#include <string.h>
int sum(int n)
{
	int i=0,p=1;
	for(;i<n;i++)
		p*=2;
	return p;
}
int main()
{
	int i=0,j,n=0,k;
	char a[100];
	char b[100];
	while (scanf("%s",a),a[0]!='0')
	{
		i=strlen(a);
		for (j=i-1;j>=0;j--)
			n=n+(a[j]-48)*sum(i-j-1);
		i=-1;
		while (n!=0)
		{
			i++;
			k=n%16;
			if (k>=10&&k<=15)
				b[i]='A'+k-10;
			else
				b[i]=k+'0';
			n/=16;
		}
		for (j=i;j>=0;j--)
			printf("%c",b[j]);
		printf("\n");	
	}
	return 0;
}