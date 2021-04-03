#include<stdio.h>
#include<string.h>

typedef struct qinao
{
    int num;
    char name[20];
    int participater;
    char zhou [20];
}qinao;
int main()
{
    int n, i, j, k;
    qinao all[100], temp;
    while (scanf("%d", &n) != EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d %s %d %s", &all[i].num, all[i].name, &all[i].participater, all[i].zhou);
        for(i=0; i< n - 1;i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(strcmp(all[j].name, all[j+1].name) > 0)
                {
                    temp = all[j];
                    all[j] = all[j+1];
                    all[j+1] = temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(strcmp(all[i].name, "China") == 0)
            {
                k = i;
                continue;
            }
            printf("%d %s %d %s\n", all[i].num, all[i].name, all[i].participater, all[i].zhou);
        }
        printf("%d %s %d %s\n", all[k].num, all[k].name, all[k].participater, all[k].zhou);
    }
    return 0;
}
