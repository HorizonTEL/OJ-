#include<stdio.h>
#include<string.h>
char a[110][110];
int judgement;
int fun(char b[110], int location, int n)
{
	int i, j, k, minlength = strlen(b), temp;
	char x[110], y[110], p;
	for(i=minlength; i >0;i--)
	{
		int judgement = 1;
		for(j=0;j<=minlength-i;j++)
		{
			int k = 0;
			judgement = 1;
			strncpy(x,a[location]+j,i);
			strncpy(y,a[location]+j,i);
			for(temp=0;temp<i/2;temp++)
			{
				p = y[temp];
				y[temp] = y[i-temp-1];
				y[i-temp-1] = p;
			}
			x[i] = '\0', y[i] = '\0';
			while(k < n)
			{
				if(k == location)
					k++;
				if(strstr(a[k], x) == NULL && strstr(a[k], y) == NULL)
				{
					judgement = 0;
					break;
				}
				k++;
				
			}
			if(judgement)
				return i;
		}
	}
	return 0;
}
int main()
{
	int t, n, i, j, k, length, temp, minlength, location;
	char  b;
	scanf("%d", &t);
	for(t; t>0; t--)
	{
		int re = 0;
		minlength = 110;
		scanf("%d", &n);
		for(i=0; i<n; i++)
		{
			scanf("%s", &a[i]);
			if(strlen(a[i]) < minlength)
			{
				minlength = strlen(a[i]);
				location = i;
			}
		}
		re = fun(a[location], location, n);
		printf("%d\n", re);
	}
	return 0;
} 

