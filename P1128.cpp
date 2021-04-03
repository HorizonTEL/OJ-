#include <stdio.h>
int main()
{
    int i, kongge, n, m;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        int a[1000] = {0};
        i = 0;
        int x = n;
        while(x>1)
        {
            kongge = m;
            while(kongge)
            {
                if(a[i%n] == 0)
                     kongge--;
                i++;
            }
            printf("%d ", (i-1)%n+1);
            a[(i-1)%n] = 1;
            x--;
        }
        for(i=0;i<n;i++)
        {
        	if(a[i] == 0)
        	{
        		printf("%d\n", i+1);
        		break;
			}
		}
    }
    return 0;
}
