#include<stdio.h>
#include<string.h>
int main()
{
    int n, m, i, j, k, max, x;
    char a[1000], b[1000], c[1000], temp;
    while(scanf("%s%s", a, b) != EOF)
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
        if (m > n)
        {
            max = m;
            for (i = n; i < m;i++)
                b[i] = '0';
        }
        else
        {
            max = n;
            for (i = m; i < n;i++)
                a[i] = '0';
        }
        c[0] =((a[0] - '0') + (b[0] - '0')) % 10 + '0';
        x = ((a[0] - '0') + (b[0] - '0')) / 10;
        for (i = 1; i < max; i++)
        {
        	x = x + (a[i] - '0') + (b[i] - '0');
        	c[i] = x % 10 + '0';
        	x /= 10;
		}
           
        if(x == 1)
        {
            c[i] = '1';
            i +=1;
            
        }
        i -= 1;
        for (i;i>= 0;i--)
            printf("%c",c[i]);
        printf("\n");
    }
    return 0;
}
