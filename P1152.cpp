#include<stdio.h>
#include<string.h>
int main()
{
	char zone[33][10]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST","EET","EEST","MSK","MSD","AST","ADT","NST","NDT",
"EST","EDT","CST","CDT","MST","MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};
	double shicha[33]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,-7,-10,-9,-8,10,11,9.5,10.5,8};
	double n, m;
	int i, j, hour, minute, N;
	char time[10], first[5], last[5], x[5];
	while(scanf("%d", &N)!= EOF)
	{
		for(N; N>0; N--)
		{
			scanf("%s", time);
			if(strcmp(time, "noon") == 0)
				hour = 12, minute = 0;
			else if(strcmp(time, "midnight") == 0)
				hour = 0,minute = 0;
			else
			{
				scanf("%s", x);
				if(strlen(time) == 5)
				{
					minute = (time[4] - '0') + (time[3] - '0') * 10;
					hour = (time[1] - '0') + (time[0] - '0') * 10;
				}
				else
				{
					minute = (time[3] - '0') + (time[2] - '0') * 10;
					hour = (time[0] - '0');
				}
				if(strcmp(x, "p.m.") == 0 && hour != 12)
					hour += 12;
				else if(strcmp(x, "a.m.") == 0 && hour == 12)
					hour = 0;
			}
			scanf("%s %s", first, last);
			for(i=0;i<32;i++)
			{
				if(strcmp(first, zone[i]) == 0)
				{
					m = shicha[i];
					break;
				}
			}
			for(i=0; i< 32; i++)
			{
				if(strcmp(last, zone[i]) == 0)
				{
					n = shicha[i];
					break;
				}
			}
			n = n - m;
			if(n<0)
			{
				if(n / 1 != n)
					minute -= 30;
				hour += (int) (n/1.0);
				if(minute < 0)
				{
					minute += 60;
					hour -= 1;
				}
				hour = (hour + 24) % 24;
			}
			else
			{
				if(n / 1 != n)
					minute += 30;
				hour += (int) (n/1.0);
				if(minute > 60)
				{
					minute -= 60;
					hour += 1;
				}
				hour %= 24;
			}
			if(hour == 12)
			{
				if(minute == 0)
					printf("noon\n");
				else
					printf("%d:%d p.m.\n", hour, minute);
			 }
			else if(hour == 0)
			{
				if(minute == 0)
					printf("midnight\n");
				else
					printf("12:%d a.m.\n", minute);
			}
			else
			{
				if(hour > 12)
					printf("%d:%d p.m.\n", hour%12, minute);
				else
					printf("%d:%d a.m.\n", hour, minute);	
			}
		}
	}
	return 0;
 }
