#include <stdio.h>
#include<math.h>
int fun(int a)
{
	int i,j;
	if (a==2||a==3)
		return 1;
	else if (a==1)
		return 0;
	else
	{
		for (i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				return 0;
				break;
			}
		}
		return 1;
	}
}
int main()
{
	int n,a,i,b;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		if (a/1000!=0)
			b=a/1000+(a/100)%10*10+(a%100)/10*100+a%10*1000;
		else if(a/100!=0)
			b=a/100+(a/10)%10*10+a%10*100;
		else if (a/10!=0)
			b=a/10+a%10*10;
		else
			b=a;
		if (fun(a)&&fun(b)==1)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
