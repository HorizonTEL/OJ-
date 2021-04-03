#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000], b[1000], c[1000], temp;
	int i, j, k, n, m, x = 0;
	while(scanf("%s%s",a, b) != EOF)
	{
		m = strlen (a), n = strlen (b);
        for (i = 0; i < (m /2); i++)
        {
            temp = a[i];
            a[i] = a[m-i-1];
            a[m-i-1] = temp;
        }
        for (i = 0; i < (n /2); i++)
        {
            temp = b[i];
            b[i] = b[n-i-1];
            b[n-i-1] = temp;
        }
        for (i = n; i < m;i++)
                b[i] = '0';
        for(i=0; i<m;i++)
        {
        	if(a[i] - b[i] - x < 0)
        	{
        		c[i] = (a[i] - '0') - (b[i] - '0') - x + 10 + '0';
        		x = 1;
			}
			else
			{
				c[i] = (a[i] - '0') - (b[i] - '0') - x + '0';
				x = 0;
			}
		}
		i -= 1;
		while(c[i] == '0')
			i--;
        for (i;i>= 0;i--)
            printf("%c",c[i]);
        printf("\n");
	}
	return 0;
 } 
