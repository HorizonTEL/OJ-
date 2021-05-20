#include<stdio.h>
#include<string.h> 
int main()
{
    char a[300];
    while (scanf("%s", a) != EOF)
    {
        int re = 0, temp = 0, i = 0, length = strlen(a);
        for(i=0; i<length; i++)
        {
            if(a[i] == '+')
            {
            	re += temp;
            	temp = 0;
			}
            else
            {
                temp = temp * 10;
                temp += a[i] -'0';
            }
        }
        re += temp;
        temp = 0;
        printf("%d\n", re);
    }
    return 0;
}
