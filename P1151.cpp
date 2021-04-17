#include<stdio.h>
#include<string.h>
int main()
{
	int day;
	char month[10];
	int year;
	char Haab[20][10] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
	char Tzolkin[20][10] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
	int i, j, n;
	scanf("%d", &n);
	for(n;n>0;n--)
	{
		scanf("%d %s %d",&day, month, year);
		for(i=0;i<19;i++)
		{
			if(strcmp(Haab[i], month) == 0)
				break;
		}
		day = day + year * 365 + i * 20;
        printf("%d %s %d\n", day%13+1, Tzolkin[day%20], day/260);
	}
	return 0; 
}
