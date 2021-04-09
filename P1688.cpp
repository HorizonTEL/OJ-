#include<stdio.h>
int quicksort(int start, int end, int a[100])	//此为快排，也可以换成冒泡排序 
{
	if(start >= end)
		return 0;
	else
	{
		int i = start, j = end, temp = a[start];
		while(i < j)
		{
			while(a[j] > temp && i < j)
				j--;
			if(i < j)
				a[i] = a[j];
			while(a[i] <= temp && i < j)
				i++;
			if(i < j)
				a[j] = a[i];
		}
		a[i] = temp;
		quicksort(start, i-1, a);
		quicksort(i+1, end, a);
	}
	return 0;
}

int main()
{
	int a, b, c, d, e, i, j, k, p, max, min, T;
	int hun[10], su[10], soup[10], mian[10], rice[10];
	int temp1, temp2, re1[100], re2[1000];
	 //re2为荤素搭配的所有情况， re1为饭汤搭配的所有情况，里面所有数均应小于max 
	scanf("%d", &T);
	for(T; T>0; T--)
    {
    	int m = 0, n = 0, sum = 0;
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        for(i=0; i<a;i++)
        	scanf("%d", &soup[i]);
        for(i=0; i<b;i++)
        	scanf("%d", &rice[i]);
        for(i=0; i<c;i++)
        	scanf("%d", &mian[i]);
        for(i=0; i<d;i++)
        	scanf("%d", &hun[i]);
        for(i=0; i<e;i++)
        	scanf("%d", &su[i]);
        scanf("%d %d", &min, &max);
        quicksort(0, a-1, soup);
        quicksort(0, b-1, rice);
        quicksort(0, c-1, mian);
        quicksort(0, d-1, hun);
        quicksort(0, e-1, su);
        for(i=0; i<d; i++)
        {
        	if(hun[i] + su[0] >= max)
        		break;
        	for(j=0; j<e; j++)
        	{
        		if(hun[i] + su[j] < max)
        		{
        			re2[n++] = hun[i] + su[j]; //此处增加的为一荤一素 
        			temp1 = n-1;
        			for(k=i+1; k<d; k++)
        			{
        				if(re2[temp1] + hun[k] < max) //两荤一素 
        					re2[n++] = re2[temp1] + hun[k];
        				else
        					break;
					}
					for(k=j+1; k<e; k++)
					{
						if(re2[temp1] + su[k] < max) 
						{
							re2[n++] = re2[temp1] + su[k];//一荤两素 
							temp2 = n - 1;
							for(p=i+1; p<d; p++)
							{
								if(re2[temp2] + hun[p] < max)
		        					re2[n++] = re2[temp2] + hun[p]; //两荤两素 
		        				else
		        					break;
							}
						}
						else
							break;	
					}
				}
        		else
					break;
			}
		}
		quicksort(0, n-1, re2);
		for(i=0; i<a; i++)
		{
			if(soup[i] + rice[0] >= max)
				break;
			for(j=0; j<b; j++)
			{
				if(soup[i] + rice[j] < max)
					re1[m++] = soup[i] + rice[j];
			}
		}
		quicksort(0, m-1, re1);
		for(i = 0; i < m; i++)
		{
			if(re1[i] + re2[0] > max)
				break;
			for(j = 0; j < n; j++)
			{
				if(re1[i] + re2[j] >= min && re1[i] + re2[j] <= max)
					sum++;
			}
		}
		for(i = 0; i < n; i++)
		{
			if(re2[i] + mian[0] > max)
				break;
			for(j = 0; j < c; j++)
			{
				if(re2[i] + mian[j] >= min && re2[i] + mian[j] <= max)
					sum++;
			}
		}
		printf("%d\n", sum);
    }
    return 0;
 } 
 
 
 
 
 
 
