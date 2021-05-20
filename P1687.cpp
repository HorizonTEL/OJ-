#include <stdio.h>
int main()
{
    int i, n;
    double x = 1.001425, temp, re;
    while(scanf("%d", &n) != EOF)
    {
        re = 0;
        for(i=0; i<48; i++)
        {
            re += n;
            re /= x;
        }
        printf("%.2lf\n", re);
    }
    return 0;
}
