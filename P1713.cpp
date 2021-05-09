#include<stdio.h>
#include<math.h>
int quicksort(int start, int end, int a[20020])
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
	int x[20010], y[20010], n, a, b;
	while(scanf("%d", &n) != EOF)
	{
		int re = 0;
		int i, temp1, temp2, temp3;
		for(i=0;i<n;i++)
		{
			scanf("%d", &x[i]);
			scanf("%d", &y[i]);
		}
		quicksort(0, n-1, x);
		quicksort(0, n-1, y);
		temp1 = x[n/2];
		temp2 = x[n/2];
		temp3 = y[n/2];
		for(i=0;i<n;i++)
			re += abs(temp3 - y[i]);
		for(i=n/2;i>=0;i--)
			re += abs((temp1--) - x[i]);
		for(i=n/2;i < n;i++)
			re += abs((temp2++) - x[i]);
		printf("%d\n", re);
	}
	return 0;
}



