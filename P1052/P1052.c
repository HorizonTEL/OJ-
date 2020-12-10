#include <stdio.h>
int main()
{
	int y,m,d;
	while (scanf("%d %d",&y,&m)!=EOF)
	{
		if (m==2)
		{
			if (y%4==0&&y%100!=0||y%400==0)
				d=29;
			else
				d=28;
		}
		else
		{
			if (m>0&&m<8)
			{
				if (m%2==0)
					d=30;
				else
					d=31;
			}
			else
			{
				if (m%2==0)
					d=31;
				else
					d=30;
			}
		}
		printf("%d\n",d);
	}
	return 0;
}